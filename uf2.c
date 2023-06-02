#include "uf2.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

uf2_family_t getFamilyInfo(uint32_t familyID)
{
    for (int index = 0; index < UF2_FAMILIES_NUMBER; index++)
    {
        if (UF2_FAMILIES[index].id == familyID)
        {
            return UF2_FAMILIES[index];
        }
    }
    return (uf2_family_t){.id = 0x0, .shortName = "NULL", .description = "NULL"};
}

uint8_t isUF2Block(uint8_t data[])
{
    for (int index = 0; index < MAGIC_VALUES_NUMBER; index++)
    {
        uint32_t value = 0x00;
        memcpy(&value, &data[MAGIC_VALUES[index].offset], sizeof(uint32_t));
        if (value != MAGIC_VALUES[index].value)
        {
            return FALSE;
        }
    }
    return TRUE;
}

uf2_block_data_t decodeBlock(uint8_t data[])
{
    uf2_block_data_t blockData;
    uint32_t payloadSize;
    memcpy(&blockData.flags, &data[8], sizeof(uint32_t));
    memcpy(&blockData.flashAddress, &data[12], sizeof(uint32_t));
    memcpy(&payloadSize, &data[16], sizeof(uint32_t));
    memcpy(&blockData.blockNumber, &data[20], sizeof(uint32_t));
    memcpy(&blockData.totalBlocks, &data[24], sizeof(uint32_t));
    memcpy(&blockData.boardFamily, &data[28], sizeof(uint32_t));
    if (payloadSize > MAX_PAYLOAD_SIZE)
    {
        fprintf(stderr, "Invalid payload size %d. Should be %d bytes or less.\n", payloadSize, MAX_PAYLOAD_SIZE);
    }
    memcpy(blockData.payload, &data[32], payloadSize);
    return blockData;
}

int getFileSize(const char *filename)
{
    struct stat file_info;
    if (0 > stat(filename, &file_info))
    {
        return -1;
    }
    return file_info.st_size;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file name>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *uf2File = fopen(argv[1], "r");
    if (uf2File == NULL)
    {
        fprintf(stderr, "Error opening uf2 file\n");
        return EXIT_FAILURE;
    }

    int uf2FileSize = getFileSize(argv[1]);
    if (uf2FileSize == -1)
    {
        fprintf(stderr, "Error reading uf2 file\n");
        return EXIT_FAILURE;
    }

    uint8_t *buffer = malloc(uf2FileSize);

    if (fread((void *)buffer, sizeof(uint8_t), uf2FileSize, uf2File) != uf2FileSize)
    {
        fprintf(stderr, "Error reading uf2 file\n");
        free(buffer);
        return EXIT_FAILURE;
    }

    // Read 512 bytes(BLOCK_SIZE) each to determine if it is a UF2 block and decode the block.
    for (int offset = 0x00; offset < uf2FileSize; offset += BLOCK_SIZE)
    {
        uint8_t data[BLOCK_SIZE];
        memcpy(&data, buffer + offset, BLOCK_SIZE);
        printf("- isUF2Block() : %s\n", isUF2Block(data) ? "TRUE" : "FALSE");
        uf2_block_data_t blockData = decodeBlock(data);
        uf2_family_t familyInfo = getFamilyInfo(blockData.boardFamily);
        printf("- decodeBlock() :\n");
        printf("\t* Block %d/%d @0x%.8X\n", blockData.blockNumber, blockData.totalBlocks, blockData.flashAddress);
        printf("\t* Family : %s\n", familyInfo.shortName);
        printf("\t* Family Description%s\n", familyInfo.description);
        printf("\t* Payload :\n");
        for (int row = 0; row < (BLOCK_SIZE / 16); row++)
        {
            printf("\t\t");
            for (int col = 0; col < 16; col++)
            {
                printf("%.2X ", blockData.payload[(row * 16) + col]);
            }
            printf("\n");
        }
        printf("\n");
    }

    free(buffer);

    return EXIT_SUCCESS;
}
