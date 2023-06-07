#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 192 pixels
// image height: 20 lines
// image pitch: 96 bytes
const u16 FlagsImg_Pal[16] __attribute__ ((aligned(4))) = {
	0xA158, 0xA538, 0x5538, 0x773F, 0x2AAA, 0x7618, 0x63AA, 0x72A0, 0xFF38, 0x5140, 0x7140, 0xE618, 0xFFFF, 0xC618, 0x52AA, 0x0000, 
};

const u8 FlagsImg[1920] __attribute__ ((aligned(4))) = {
	0x79, 0x00, 0x03, 0x33, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x33, 0x33, 0x33, 0x35, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x55, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 
	0x79, 0x00, 0x08, 0x88, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x88, 0x88, 0x88, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x88, 0xBB, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
	0x64, 0x23, 0x33, 0x33, 0x33, 0x55, 0x55, 0x53, 0x00, 0x00, 0x03, 0x00, 0x64, 0x25, 0x33, 0x33, 
	0x33, 0xFF, 0x3F, 0xF3, 0x55, 0x55, 0x00, 0x00, 0x64, 0x62, 0x20, 0x00, 0x00, 0x33, 0x33, 0x33, 
	0x33, 0x50, 0x02, 0x00, 0x64, 0x25, 0x33, 0x35, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x00, 0x00, 
	0x6E, 0x18, 0x88, 0x88, 0x88, 0xBB, 0xBB, 0xB8, 0x00, 0x00, 0x08, 0x00, 0x6E, 0x1B, 0x88, 0x88, 
	0x88, 0xAA, 0x8A, 0x98, 0xBB, 0xBB, 0x00, 0x00, 0x6E, 0x61, 0x10, 0x00, 0x00, 0x88, 0x88, 0x88, 
	0x88, 0xB0, 0x01, 0x00, 0x6E, 0x1B, 0x88, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0x35, 0xFF, 0x5F, 0xF5, 0x33, 0x33, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0x33, 0xF3, 0x3F, 0x35, 0x35, 0x50, 0x03, 0x00, 0x79, 0x62, 0x52, 0x55, 0x53, 0xFF, 0x3F, 0xF3, 
	0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x53, 0x55, 0x53, 0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0x8B, 0x99, 0xB9, 0x9B, 0x88, 0x88, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0x88, 0xA8, 0x8A, 0x8B, 0x8B, 0xB0, 0x08, 0x00, 0x79, 0x61, 0xB1, 0xBB, 0xB8, 0xAA, 0x8A, 0xA8, 
	0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0xB8, 0xBB, 0xB8, 0x88, 0x88, 0x88, 0x80, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0x3F, 0xF5, 0x5F, 0x53, 0x53, 0x30, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0x3F, 0xFF, 0xFF, 0xF3, 0x55, 0x00, 0x00, 0x00, 0x79, 0x62, 0x25, 0x55, 0x35, 0xF3, 0x3F, 0x33, 
	0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x35, 0x55, 0xFF, 0x3F, 0xF3, 0x33, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0x8A, 0x9B, 0xB9, 0xB8, 0xB8, 0x80, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0x8A, 0xAA, 0xAA, 0x98, 0xBB, 0x00, 0x00, 0x00, 0x79, 0x61, 0x1B, 0xBB, 0x8B, 0xA8, 0x8A, 0x88, 
	0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x8B, 0xBB, 0xAA, 0x8A, 0xA8, 0x88, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0xFF, 0xFF, 0xFF, 0xF5, 0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0xFF, 0xCF, 0xFC, 0xFF, 0x55, 0x00, 0x00, 0x00, 0x79, 0x62, 0x52, 0x55, 0x53, 0xFF, 0xFF, 0xF3, 
	0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x53, 0x55, 0xF3, 0x3F, 0x33, 0x33, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0xA9, 0x99, 0x99, 0x9B, 0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0xAA, 0xCA, 0xAC, 0xA9, 0xBB, 0x00, 0x00, 0x00, 0x79, 0x61, 0xB1, 0xBB, 0xB8, 0xAA, 0xAA, 0xA8, 
	0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0xB8, 0xBB, 0x98, 0x8A, 0x88, 0x88, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0xFF, 0xDF, 0xFD, 0xFF, 0x53, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0xFF, 0xCF, 0xFC, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x62, 0x25, 0x55, 0x3F, 0xCF, 0xFC, 0xFF, 
	0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x35, 0x5F, 0xFF, 0xFF, 0xF3, 0x30, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0xAA, 0xD9, 0x9D, 0x9A, 0xB8, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0xAA, 0xCA, 0xAC, 0x9A, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x61, 0x1B, 0xBB, 0x89, 0xCA, 0xAC, 0xAA, 
	0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x8B, 0xB9, 0xAA, 0xAA, 0xA8, 0x80, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0xFF, 0xDF, 0xFD, 0xFF, 0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x62, 0x52, 0x55, 0xFF, 0xCF, 0xFC, 0xFF, 
	0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x53, 0xFF, 0xDF, 0xFC, 0xFF, 0x30, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0xA9, 0xD9, 0x9D, 0x99, 0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0xAA, 0xAA, 0xAA, 0xA9, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x61, 0xB1, 0xBB, 0x9A, 0xCA, 0xAC, 0xAA, 
	0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0xB8, 0x99, 0xDA, 0xAC, 0xAA, 0x80, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0xFF, 0xFF, 0xFF, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0xFF, 0xCF, 0xFC, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x62, 0x25, 0x55, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x35, 0xFF, 0xDF, 0xFC, 0xFF, 0x30, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0xAA, 0x99, 0x99, 0x9A, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0xAA, 0xCA, 0xAC, 0x9A, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x61, 0x1B, 0xBB, 0xA9, 0xAA, 0xAA, 0xAA, 
	0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x8B, 0x99, 0xDA, 0xAC, 0xAA, 0x80, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0xFF, 0xDF, 0xFD, 0xFF, 0x30, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0xFF, 0xFC, 0xCF, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x62, 0x52, 0x55, 0xFF, 0xCF, 0xFC, 0xFF, 
	0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0x30, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0xA9, 0xD9, 0x9D, 0x99, 0x80, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0xAA, 0xAC, 0xCA, 0xA9, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x61, 0xB1, 0xBB, 0x9A, 0xCA, 0xAC, 0xAA, 
	0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0xB8, 0x99, 0x9A, 0xAA, 0xAA, 0x80, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0x3F, 0xFD, 0xDF, 0xFF, 0x50, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0x3F, 0xFF, 0xFF, 0xF5, 0x55, 0x00, 0x00, 0x00, 0x79, 0x62, 0x25, 0x55, 0xFF, 0xFC, 0xCF, 0xFF, 
	0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x35, 0xFF, 0xDF, 0xFC, 0xFF, 0x33, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0x8A, 0x9D, 0xD9, 0x9A, 0xB0, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0x8A, 0xAA, 0xAA, 0x9B, 0xBB, 0x00, 0x00, 0x00, 0x79, 0x61, 0x1B, 0xBB, 0xA9, 0xAC, 0xCA, 0xAA, 
	0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x8B, 0x99, 0xDA, 0xAC, 0xAA, 0x88, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0x35, 0xFF, 0xFF, 0xF5, 0x33, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0x33, 0xFF, 0xFF, 0x53, 0x55, 0x00, 0x00, 0x00, 0x79, 0x62, 0x52, 0x55, 0xFF, 0xFF, 0xFF, 0xF3, 
	0x33, 0x50, 0x00, 0x00, 0x79, 0x25, 0x33, 0x53, 0xFF, 0xFC, 0xCF, 0xFF, 0x33, 0x00, 0x00, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0x8B, 0x99, 0x99, 0x9B, 0x88, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0x88, 0xAA, 0xAA, 0xB8, 0xBB, 0x00, 0x00, 0x00, 0x79, 0x61, 0xB1, 0xBB, 0x9A, 0xAA, 0xAA, 0xA8, 
	0x88, 0xB0, 0x00, 0x00, 0x79, 0x1B, 0x88, 0xB8, 0x99, 0x9C, 0xCA, 0xAA, 0x88, 0x00, 0x00, 0x00, 
	0x79, 0x23, 0x33, 0x33, 0x33, 0xFF, 0xFF, 0x53, 0x53, 0x00, 0x00, 0x00, 0x79, 0x25, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x35, 0x55, 0x50, 0x00, 0x00, 0x79, 0x62, 0x25, 0x55, 0x3F, 0xFF, 0xFF, 0x33, 
	0x33, 0x55, 0x00, 0x00, 0x79, 0x25, 0x33, 0x35, 0x5F, 0xFF, 0xFF, 0xF3, 0x33, 0x30, 0x03, 0x00, 
	0x79, 0x18, 0x88, 0x88, 0x88, 0x99, 0x99, 0xB8, 0xB8, 0x00, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x88, 
	0x88, 0x88, 0x88, 0x8B, 0xBB, 0xB0, 0x00, 0x00, 0x79, 0x61, 0x1B, 0xBB, 0x89, 0xAA, 0xAA, 0x88, 
	0x88, 0xBB, 0x00, 0x00, 0x79, 0x1B, 0x88, 0x8B, 0xB9, 0xAA, 0xAA, 0xA8, 0x88, 0x80, 0x08, 0x00, 
	0x64, 0x23, 0x30, 0x00, 0x00, 0x55, 0x55, 0x35, 0x33, 0x30, 0x03, 0x00, 0x64, 0x25, 0x33, 0x33, 
	0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x64, 0x62, 0x52, 0x55, 0x53, 0x53, 0x33, 0x33, 
	0x00, 0x00, 0x02, 0x00, 0x64, 0x25, 0x33, 0x53, 0x55, 0xFF, 0xFF, 0x33, 0x33, 0x33, 0x00, 0x00, 
	0x6E, 0x18, 0x80, 0x00, 0x00, 0xBB, 0xBB, 0x8B, 0x88, 0x80, 0x08, 0x00, 0x6E, 0x1B, 0x88, 0x88, 
	0x00, 0x00, 0x00, 0x00, 0xBB, 0xBB, 0x00, 0x00, 0x6E, 0x61, 0xB1, 0xBB, 0xB8, 0xB8, 0x88, 0x88, 
	0x00, 0x00, 0x01, 0x00, 0x6E, 0x1B, 0x88, 0xB8, 0xBB, 0x9A, 0xAA, 0x88, 0x88, 0x88, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x33, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x79, 0x00, 0x05, 0x55, 0x35, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x55, 0x53, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x88, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x79, 0x00, 0x0B, 0xBB, 0x8B, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0xBB, 0xB8, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
