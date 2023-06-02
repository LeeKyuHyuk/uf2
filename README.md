# Check and Decode of USB Flashing Format (UF2) File

This is an example code to check and decode [UF2](https://github.com/microsoft/uf2) file format.

Below is the format of the output when the program is run:

```text
- isUF2Block() : TRUE
- decodeBlock() :
	* Block 0/1100 @0x10000000
	* Family : RP2040
	* Family DescriptionRaspberry Pi RP2040
	* Payload :
		00 B5 32 4B 21 20 58 60 98 68 02 21 88 43 98 60 
		D8 60 18 61 58 61 2E 4B 00 21 99 60 02 21 59 61 
		01 21 F0 22 99 50 2B 49 19 60 01 21 99 60 35 20 
		00 F0 44 F8 02 22 90 42 14 D0 06 21 19 66 00 F0 
		34 F8 19 6E 01 21 19 66 00 20 18 66 1A 66 00 F0 
		2C F8 19 6E 19 6E 19 6E 05 20 00 F0 2F F8 01 21 
		08 42 F9 D1 00 21 99 60 1B 49 19 60 00 21 59 60 
		1A 49 1B 48 01 60 01 21 99 60 EB 21 19 66 A0 21 
		19 66 00 F0 12 F8 00 21 99 60 16 49 14 48 01 60 
		01 21 99 60 01 BC 00 28 00 D0 00 47 12 48 13 49 
		08 60 03 C8 80 F3 08 88 08 47 03 B5 99 6A 04 20 
		01 42 FB D0 01 20 01 42 F8 D1 03 BD 02 B5 18 66 
		18 66 FF F7 F2 FF 18 6E 18 6E 02 BD 00 00 02 40 
		00 00 00 18 00 00 07 00 00 03 5F 00 21 22 00 00 
		F4 00 00 18 22 20 00 A0 00 01 00 10 08 ED 00 E0 
		00 00 00 00 00 00 00 00 00 00 00 00 74 B2 4E 7A 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		4C 04 00 00 56 FF 8B E4 55 46 32 0A 57 51 5D 9E 
		00 20 00 00 00 00 00 10 00 01 00 00 00 00 00 00 

- isUF2Block() : TRUE
- decodeBlock() :
	* Block 1/1100 @0x10000100
	* Family : RP2040
	* Family DescriptionRaspberry Pi RP2040
	* Payload :
		00 20 04 20 F7 01 00 10 C3 01 00 10 C5 01 00 10 
		C1 01 00 10 C1 01 00 10 C1 01 00 10 C1 01 00 10 
		C1 01 00 10 C1 01 00 10 C1 01 00 10 C7 01 00 10 
		C1 01 00 10 C1 01 00 10 C9 01 00 10 CB 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		CD 01 00 10 CD 01 00 10 CD 01 00 10 CD 01 00 10 
		00 BE 00 BE 00 BE 00 BE 00 BE 00 BE 00 F0 4B F8 
		10 38 00 BE F2 EB 88 71 78 F6 03 10 D0 F6 03 10 
		34 02 00 10 90 A3 1A E7 00 20 21 49 08 60 06 C8 
		81 F3 08 88 10 47 1F 48 00 68 00 28 2F D1 0D A4 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 
		4C 04 00 00 56 FF 8B E4 55 46 32 0A 57 51 5D 9E 

...

- isUF2Block() : TRUE
- decodeBlock() :
	* Block 1098/1100 @0x10044A00
	* Family : RP2040
	* Family DescriptionRaspberry Pi RP2040
	* Payload :
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 4A 04 00 00 
		4C 04 00 00 56 FF 8B E4 55 46 32 0A 57 51 5D 9E 
		00 20 00 00 00 4A 04 10 00 01 00 00 4A 04 00 00 

- isUF2Block() : TRUE
- decodeBlock() :
	* Block 1099/1100 @0x10044B00
	* Family : RP2040
	* Family DescriptionRaspberry Pi RP2040
	* Payload :
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 38 56 00 20 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 75 D6 02 10 
		F1 B4 02 10 39 BC 02 10 35 CC 02 10 F1 47 00 20 
		C5 02 00 10 9D D6 02 10 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
		00 00 00 00 00 00 00 00 00 00 00 00 4B 04 00 00 
		4C 04 00 00 56 FF 8B E4 55 46 32 0A 57 51 5D 9E 
		00 20 00 00 00 4B 04 10 00 01 00 00 4B 04 00 00 
```