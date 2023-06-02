#include <stdint.h>

#define FALSE 0
#define TRUE 1

#define MAGIC_VALUES_NUMBER 3
#define UF2_FAMILIES_NUMBER 41
#define NOT_FOUND 0xFFFFFFFF

#define BLOCK_SIZE 512
#define MAX_PAYLOAD_SIZE 476

typedef struct
{
    uint32_t offset;
    uint32_t value;
} uf2_magic_value_t;

typedef struct
{
    uint32_t id;
    char *shortName;
    char *description;
} uf2_family_t;

typedef struct
{
    // See UF2Flags for possible flag values.
    uint32_t flags;
    // Address in flash where the data should be written
    uint32_t flashAddress;
    // The payload usually contains 256 bytes, but can be up to 476 bytes
    uint8_t payload[MAX_PAYLOAD_SIZE];
    // Sequential block number; starts at 0
    uint32_t blockNumber;
    // Total number of blocks in file;
    uint32_t totalBlocks;
    // Board family ID, file size, or zero (depending on Flags)
    uint32_t boardFamily;
} uf2_block_data_t;

const uf2_magic_value_t MAGIC_VALUES[MAGIC_VALUES_NUMBER] = {
    {.offset = 0, .value = 0x0a324655},
    {.offset = 4, .value = 0x9e5d5157},
    {.offset = 508, .value = 0x0ab16f30},
};

enum UF2_FLAGS
{
    NOT_MAIN_FLASH = 0x00000001,
    FILE_CONTAINER = 0x00001000,
    FAMILY_ID_PRESENT = 0x00002000,
    MD5_CHECKSUM_PRESENT = 0x00004000,
    EXTENSION_TAGS_PRESENT = 0x00008000
};

const uf2_family_t UF2_FAMILIES[UF2_FAMILIES_NUMBER] = {
    {
        .id = 0x16573617,
        .shortName = "ATMEGA32",
        .description = "Microchip (Atmel) ATmega32",
    },
    {
        .id = 0x1851780a,
        .shortName = "SAML21",
        .description = "Microchip (Atmel) SAML21",
    },
    {
        .id = 0x1b57745f,
        .shortName = "NRF52",
        .description = "Nordic NRF52",
    },
    {
        .id = 0x1c5f21b0,
        .shortName = "ESP32",
        .description = "ESP32",
    },
    {
        .id = 0x1e1f432d,
        .shortName = "STM32L1",
        .description = "ST STM32L1xx",
    },
    {
        .id = 0x202e3a91,
        .shortName = "STM32L0",
        .description = "ST STM32L0xx",
    },
    {
        .id = 0x21460ff0,
        .shortName = "STM32WL",
        .description = "ST STM32WLxx",
    },
    {
        .id = 0x2abc77ec,
        .shortName = "LPC55",
        .description = "NXP LPC55xx",
    },
    {
        .id = 0x300f5633,
        .shortName = "STM32G0",
        .description = "ST STM32G0xx",
    },
    {
        .id = 0x31d228c6,
        .shortName = "GD32F350",
        .description = "GD32F350",
    },
    {
        .id = 0x04240bdf,
        .shortName = "STM32L5",
        .description = "ST STM32L5xx",
    },
    {
        .id = 0x4c71240a,
        .shortName = "STM32G4",
        .description = "ST STM32G4xx",
    },
    {
        .id = 0x4fb2d5bd,
        .shortName = "MIMXRT10XX",
        .description = "NXP i.MX RT10XX",
    },
    {
        .id = 0x53b80f00,
        .shortName = "STM32F7",
        .description = "ST STM32F7xx",
    },
    {
        .id = 0x55114460,
        .shortName = "SAMD51",
        .description = "Microchip (Atmel) SAMD51",
    },
    {
        .id = 0x57755a57,
        .shortName = "STM32F4",
        .description = "ST STM32F4xx",
    },
    {
        .id = 0x5a18069b,
        .shortName = "FX2",
        .description = "Cypress FX2",
    },
    {
        .id = 0x5d1a0a2e,
        .shortName = "STM32F2",
        .description = "ST STM32F2xx",
    },
    {
        .id = 0x5ee21072,
        .shortName = "STM32F1",
        .description = "ST STM32F103",
    },
    {
        .id = 0x621e937a,
        .shortName = "NRF52833",
        .description = "Nordic NRF52833",
    },
    {
        .id = 0x647824b6,
        .shortName = "STM32F0",
        .description = "ST STM32F0xx",
    },
    {
        .id = 0x68ed2b88,
        .shortName = "SAMD21",
        .description = "Microchip (Atmel) SAMD21",
    },
    {
        .id = 0x6b846188,
        .shortName = "STM32F3",
        .description = "ST STM32F3xx",
    },
    {
        .id = 0x6d0922fa,
        .shortName = "STM32F407",
        .description = "ST STM32F407",
    },
    {
        .id = 0x6db66082,
        .shortName = "STM32H7",
        .description = "ST STM32H7xx",
    },
    {
        .id = 0x70d16653,
        .shortName = "STM32WB",
        .description = "ST STM32WBxx",
    },
    {
        .id = 0x7eab61ed,
        .shortName = "ESP8266",
        .description = "ESP8266",
    },
    {
        .id = 0x7f83e793,
        .shortName = "KL32L2",
        .description = "NXP KL32L2x",
    },
    {
        .id = 0x8fb060fe,
        .shortName = "STM32F407VG",
        .description = "ST STM32F407VG",
    },
    {
        .id = 0xada52840,
        .shortName = "NRF52840",
        .description = "Nordic NRF52840",
    },
    {
        .id = 0xbfdd4eee,
        .shortName = "ESP32S2",
        .description = "ESP32-S2",
    },
    {
        .id = 0xc47e5767,
        .shortName = "ESP32S3",
        .description = "ESP32-S3",
    },
    {
        .id = 0xd42ba06c,
        .shortName = "ESP32C3",
        .description = "ESP32-C3",
    },
    {
        .id = 0x2b88d29c,
        .shortName = "ESP32C2",
        .description = "ESP32-C2",
    },
    {
        .id = 0x332726f6,
        .shortName = "ESP32H2",
        .description = "ESP32-H2",
    },
    {
        .id = 0xe48bff56,
        .shortName = "RP2040",
        .description = "Raspberry Pi RP2040",
    },
    {
        .id = 0x00ff6919,
        .shortName = "STM32L4",
        .description = "ST STM32L4xx",
    },
    {
        .id = 0x9af03e33,
        .shortName = "GD32VF103",
        .description = "GigaDevice GD32VF103",
    },
    {
        .id = 0x4f6ace52,
        .shortName = "CSK4",
        .description = "LISTENAI CSK300x/400x",
    },
    {
        .id = 0x6e7348a8,
        .shortName = "CSK6",
        .description = "LISTENAI CSK60xx",
    },
    {
        .id = 0x11de784a,
        .shortName = "M0SENSE",
        .description = "M0SENSE BL702",
    }};

uf2_family_t getFamilyInfo(uint32_t familyID);
uint8_t isUF2Block(uint8_t data[]);
uf2_block_data_t decodeBlock(uint8_t data[]);
int getFileSize(const char *filename);