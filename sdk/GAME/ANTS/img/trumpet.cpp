#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 38 pixels
// image height: 32 lines
// image pitch: 19 bytes
const u16 TrumpetImg_Pal[12] __attribute__ ((aligned(4))) = {
	0x0000, 0xFFFF, 0xA158, 0x773F, 0x07F8, 0x03AA, 0x53AA, 0xFE00, 0xE520, 0xA3A0, 0x5140, 0x7140, 
};

const u8 TrumpetImg[608] __attribute__ ((aligned(4))) = {
	0x22, 0x22, 0x22, 0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x24, 0x44, 0x44, 0x42, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0x22, 0x22, 0x22, 0x23, 0x33, 0x66, 0x66, 0x66, 0x33, 0x32, 0x22, 0x22, 
	0x22, 0x44, 0x45, 0x55, 0x55, 0x54, 0x44, 0x22, 0x22, 0x22, 0x33, 0x66, 0x66, 0x66, 0x66, 0x66, 
	0x33, 0x22, 0x22, 0x24, 0x45, 0x55, 0x55, 0x55, 0x55, 0x54, 0x42, 0x22, 0x23, 0x36, 0x66, 0x60, 
	0x66, 0x06, 0x66, 0x63, 0x32, 0x22, 0x44, 0x55, 0x55, 0xB5, 0x5B, 0x55, 0x55, 0x44, 0x22, 0x23, 
	0x36, 0x66, 0x06, 0x60, 0x66, 0x66, 0x63, 0x32, 0x22, 0x44, 0x55, 0x5B, 0x55, 0xB5, 0x55, 0x55, 
	0x44, 0x22, 0x33, 0x66, 0x66, 0x06, 0x60, 0x66, 0x66, 0x66, 0x73, 0x24, 0x45, 0x55, 0x5B, 0x55, 
	0xB5, 0x55, 0x55, 0x57, 0x42, 0x33, 0x66, 0x60, 0x00, 0x00, 0x66, 0x66, 0x67, 0x73, 0x24, 0x45, 
	0x55, 0xBB, 0xBB, 0xB5, 0x55, 0x55, 0x77, 0x42, 0x33, 0x66, 0x60, 0x01, 0x01, 0x66, 0x66, 0x77, 
	0x77, 0x24, 0x45, 0x55, 0xBB, 0x1B, 0x15, 0x55, 0x57, 0x77, 0x72, 0x33, 0x66, 0x60, 0x01, 0x01, 
	0x66, 0x87, 0x78, 0x89, 0x24, 0x45, 0x55, 0xBB, 0x1B, 0x15, 0x58, 0x77, 0x88, 0x92, 0x33, 0x66, 
	0x60, 0x00, 0x00, 0x87, 0x78, 0x90, 0x99, 0x94, 0x45, 0x55, 0xBB, 0xBB, 0xB8, 0x77, 0x89, 0xB9, 
	0x99, 0x33, 0x66, 0x60, 0x00, 0x07, 0x79, 0x66, 0x00, 0x33, 0x24, 0x45, 0x55, 0xAB, 0xBB, 0x77, 
	0x95, 0x5B, 0xB4, 0x42, 0x33, 0x66, 0x66, 0x00, 0x06, 0x66, 0x66, 0x00, 0x33, 0x24, 0x45, 0x55, 
	0x5A, 0xAA, 0x55, 0x55, 0x5B, 0xA4, 0x42, 0x33, 0x66, 0x66, 0x60, 0x06, 0x66, 0x66, 0x06, 0x33, 
	0x24, 0x45, 0x55, 0x55, 0xBB, 0x55, 0x55, 0x5B, 0x54, 0x42, 0x33, 0x66, 0x00, 0x00, 0x00, 0x66, 
	0x66, 0x06, 0x33, 0x24, 0x45, 0x5B, 0xBB, 0xBB, 0xB5, 0x55, 0x5B, 0x54, 0x42, 0x33, 0x00, 0x66, 
	0x00, 0x00, 0x00, 0x60, 0x66, 0x33, 0x24, 0x4B, 0xB5, 0x5B, 0xBB, 0xBB, 0xB5, 0xB5, 0x54, 0x42, 
	0x33, 0x60, 0x06, 0x00, 0x00, 0x66, 0x00, 0x66, 0x33, 0x24, 0x45, 0xBB, 0x5B, 0xBB, 0xB5, 0x5B, 
	0xA5, 0x54, 0x42, 0x33, 0x66, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x33, 0x24, 0x45, 0x5B, 0xBA, 
	0xBB, 0xA5, 0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 0x60, 0x00, 0x06, 0x66, 0x66, 0x66, 0x33, 0x24, 
	0x45, 0x55, 0xBB, 0xAA, 0x55, 0x55, 0x55, 0x54, 0x42, 0x33, 0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 
	0x66, 0x33, 0x24, 0x4B, 0xBB, 0xAA, 0xBB, 0xB5, 0x55, 0x55, 0x54, 0x42, 0x33, 0x00, 0x00, 0x00, 
	0x00, 0x66, 0x66, 0x66, 0x33, 0x24, 0x4A, 0xBB, 0xBB, 0xBB, 0xA5, 0x55, 0x55, 0x54, 0x42, 0x33, 
	0x60, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x33, 0x24, 0x45, 0xAB, 0xBB, 0xBB, 0xA5, 0x55, 0x55, 
	0x54, 0x42, 0x33, 0x66, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x33, 0x24, 0x45, 0x5A, 0xAA, 0xAA, 
	0xB5, 0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 0x66, 0x00, 0x60, 0x66, 0x66, 0x66, 0x33, 0x24, 0x45, 
	0x55, 0x5B, 0xB5, 0xB5, 0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 0x66, 0x06, 0x60, 0x66, 0x66, 0x66, 
	0x33, 0x24, 0x45, 0x55, 0x5B, 0x55, 0xB5, 0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 0x66, 0x06, 0x66, 
	0x06, 0x66, 0x66, 0x33, 0x24, 0x45, 0x55, 0x5B, 0x55, 0x5B, 0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 
	0x60, 0x66, 0x66, 0x06, 0x66, 0x66, 0x33, 0x24, 0x45, 0x55, 0xB5, 0x55, 0x5B, 0x55, 0x55, 0x54, 
	0x42, 0x33, 0x66, 0x60, 0x66, 0x66, 0x60, 0x66, 0x66, 0x33, 0x24, 0x45, 0x55, 0xB5, 0x55, 0x5B, 
	0x55, 0x55, 0x54, 0x42, 0x33, 0x66, 0x60, 0x00, 0x66, 0x60, 0x00, 0x66, 0x33, 0x24, 0x45, 0x55, 
	0xBB, 0xB5, 0x55, 0xBB, 0xB5, 0x54, 0x42, 0x33, 0x66, 0x60, 0x00, 0x66, 0x60, 0x00, 0x66, 0x33, 
	0x24, 0x45, 0x55, 0xAA, 0xB5, 0x55, 0xAA, 0xB5, 0x54, 0x42, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
};
