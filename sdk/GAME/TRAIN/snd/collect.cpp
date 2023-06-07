#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 CollectSnd[3642] = {
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7E, 0x7A, 0x8E, 0xFD, 0xC7, 0xE2, 0x7D, 
	0x44, 0x9B, 0x77, 0xE9, 0xEA, 0xDF, 0xC5, 0x42, 0x92, 0x8A, 0xB7, 0xFF, 0xD8, 0xF3, 0x5F, 0x71, 
	0xA0, 0x98, 0xF8, 0xF0, 0xE2, 0xE9, 0xE4, 0xF0, 0xE2, 0xFF, 0xA6, 0x56, 0xB1, 0x94, 0xAA, 0x91, 
	0xF5, 0xF1, 0xEA, 0xDD, 0xF6, 0xAD, 0x4D, 0xA4, 0x8D, 0x9E, 0x86, 0xE4, 0xF2, 0xD5, 0xDC, 0xD6, 
	0xDD, 0xD6, 0xE0, 0xD4, 0xE9, 0xB2, 0x3A, 0x93, 0x81, 0x8F, 0x7B, 0x88, 0x70, 0xE7, 0xD8, 0xC2, 
	0xBD, 0xC8, 0xB6, 0xD7, 0x70, 0x3A, 0x71, 0x97, 0xF8, 0xAF, 0xBF, 0xB0, 0xBB, 0xB3, 0xB9, 0xB6, 
	0xAF, 0x25, 0x5E, 0x63, 0x63, 0x5B, 0x5C, 0x51, 0x57, 0x44, 0xC6, 0xB5, 0x8D, 0x99, 0x91, 0x98, 
	0x93, 0x98, 0x95, 0x99, 0x96, 0x9A, 0x97, 0x9B, 0x97, 0x9C, 0x96, 0x9E, 0x21, 0x34, 0x4D, 0x44, 
	0x43, 0x3F, 0x3A, 0x3A, 0x31, 0x36, 0x25, 0xAE, 0x97, 0x6F, 0x7D, 0x74, 0x7D, 0x78, 0x7F, 0x7B, 
	0x81, 0x7D, 0x84, 0x7E, 0x88, 0x7E, 0x91, 0x2F, 0x15, 0x3F, 0x2E, 0x38, 0x2A, 0x32, 0x24, 0x2F, 
	0x1C, 0x2F, 0x0B, 0x6F, 0xB2, 0x5F, 0x74, 0x67, 0x74, 0x6F, 0x76, 0x75, 0x78, 0x7B, 0x7A, 0x81, 
	0x7A, 0x8D, 0x42, 0x0E, 0x3D, 0x2F, 0x38, 0x2D, 0x33, 0x29, 0x30, 0x21, 0x3E, 0xBE, 0x79, 0x76, 
	0x76, 0x79, 0x7B, 0x7E, 0x81, 0x82, 0x86, 0x85, 0x8C, 0x87, 0x93, 0x87, 0x9F, 0x5B, 0x13, 0x4A, 
	0x42, 0x45, 0x42, 0x3D, 0x43, 0x30, 0xB4, 0xAC, 0x7D, 0x8F, 0x85, 0x90, 0x8B, 0x93, 0x90, 0x97, 
	0x94, 0x9A, 0x97, 0x9F, 0x99, 0xA4, 0x99, 0xAD, 0x80, 0x1B, 0x52, 0x55, 0x4E, 0x57, 0x3C, 0x92, 
	0xD3, 0x8B, 0x9E, 0x91, 0x9C, 0x97, 0x9D, 0x9B, 0x9F, 0x9F, 0xA0, 0xA3, 0xA0, 0xA7, 0x9E, 0xB0, 
	0x39, 0x34, 0x60, 0x4D, 0x58, 0x48, 0x53, 0x3D, 0x65, 0xD8, 0x92, 0x92, 0x8F, 0x92, 0x92, 0x94, 
	0x96, 0x95, 0x99, 0x96, 0x9E, 0x94, 0xA7, 0x70, 0x15, 0x51, 0x48, 0x4C, 0x45, 0x44, 0x41, 0x3B, 
	0x3F, 0x31, 0xB9, 0x9F, 0x7C, 0x87, 0x82, 0x87, 0x86, 0x89, 0x8B, 0x8B, 0x8F, 0x8B, 0x96, 0x26, 
	0x26, 0x4A, 0x3B, 0x43, 0x36, 0x3E, 0x31, 0x3B, 0x29, 0x3C, 0x18, 0x86, 0xB5, 0x6D, 0x81, 0x77, 
	0x80, 0x7F, 0x81, 0x86, 0x81, 0x93, 0x5B, 0x0A, 0x41, 0x39, 0x3D, 0x39, 0x36, 0x38, 0x2F, 0x39, 
	0x22, 0x61, 0xC5, 0x75, 0x83, 0x7A, 0x84, 0x82, 0x87, 0x89, 0x8A, 0x8F, 0x8D, 0x96, 0x1F, 0x31, 
	0x4A, 0x45, 0x43, 0x45, 0x3B, 0x47, 0x2D, 0xAB, 0xB8, 0x7D, 0x93, 0x86, 0x94, 0x8D, 0x99, 0x92, 
	0x9D, 0x95, 0xA3, 0x95, 0xB0, 0x64, 0x1D, 0x5D, 0x4E, 0x57, 0x4D, 0x50, 0x53, 0xDE, 0x9D, 0x9D, 
	0x92, 0xA4, 0x91, 0xB3, 0x36, 0x32, 0x4C, 0xA4, 0xD9, 0x8F, 0xAC, 0x96, 0xA9, 0x1D, 0x4C, 0x50, 
	0x5C, 0x42, 0x92, 0xDA, 0x8F, 0xA6, 0x92, 0xA8, 0x1D, 0x43, 0x4E, 0x59, 0x3E, 0x87, 0xD9, 0x92, 
	0x9C, 0x98, 0x98, 0xA7, 0x63, 0x17, 0x61, 0x3D, 0xCA, 0xB8, 0x98, 0x91, 0x10, 0x50, 0x3E, 0x8E, 
	0xDC, 0x88, 0xAD, 0x32, 0x2A, 0x51, 0x4F, 0xDB, 0x9F, 0x99, 0x95, 0x99, 0x17, 0x5A, 0xEB, 0x76, 
	0x09, 0x90, 0xDE, 0x39, 0x1D, 0xC4, 0xBB, 0x16, 0x4B, 0xE1, 0x84, 0x05, 0x85, 0xE2, 0x47, 0x19, 
	0xB4, 0xCA, 0x06, 0x9C, 0xC8, 0x8B, 0x9F, 0x93, 0x9F, 0x99, 0xA0, 0x9D, 0xA2, 0xA1, 0xA5, 0xA4, 
	0xA7, 0xA7, 0xA9, 0xA9, 0xAB, 0xAB, 0xAC, 0xAD, 0xAD, 0xAE, 0xAE, 0xAF, 0xB0, 0xB0, 0xB0, 0xB0, 
	0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0xB0, 0xB0, 0xB0, 0xAF, 0xAF, 0xAF, 0xAE, 0xAD, 
	0xAD, 0xAC, 0xAC, 0xAB, 0xAA, 0xAA, 0xA9, 0xA8, 0xA7, 0xA6, 0xA6, 0xA5, 0xA4, 0xA3, 0xA2, 0xA1, 
	0xA0, 0x9F, 0x9E, 0x9D, 0x9C, 0x9B, 0x99, 0x98, 0x97, 0x96, 0x95, 0x94, 0x93, 0x92, 0x91, 0x8F, 
	0x8E, 0x8D, 0x8C, 0x8B, 0x8A, 0x88, 0x87, 0x86, 0x85, 0x84, 0x83, 0x82, 0x81, 0x80, 0x7F, 0x7E, 
	0x7D, 0x7B, 0x7B, 0x79, 0x79, 0x77, 0x78, 0x73, 0x7B, 0x42, 0x68, 0x67, 0x66, 0x65, 0x64, 0x65, 
	0x67, 0x69, 0x69, 0x69, 0x62, 0x5E, 0x59, 0x59, 0x58, 0x59, 0x56, 0x57, 0x59, 0x60, 0x5B, 0x63, 
	0x4F, 0x67, 0x6B, 0x43, 0x4F, 0x47, 0x4F, 0x4B, 0x51, 0x4F, 0x53, 0x52, 0x56, 0x56, 0x58, 0x59, 
	0x5B, 0x5C, 0x5E, 0x5F, 0x60, 0x62, 0x63, 0x64, 0x66, 0x67, 0x68, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 
	0x6F, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7E, 
	0x7F, 0x80, 0x81, 0x81, 0x82, 0x83, 0x83, 0x84, 0x85, 0x85, 0x86, 0x86, 0x87, 0x87, 0x88, 0x88, 
	0x88, 0x89, 0x89, 0x89, 0x89, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 
	0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x89, 0x89, 0x89, 0x88, 
	0x88, 0x88, 0x88, 0x87, 0x87, 0x87, 0x87, 0x86, 0x86, 0x85, 0x85, 0x85, 0x84, 0x84, 0x84, 0x83, 
	0x83, 0x82, 0x82, 0x82, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7D, 0x7C, 
	0x7C, 0x7B, 0x7B, 0x7B, 0x7A, 0x7A, 0x79, 0x79, 0x78, 0x78, 0x78, 0x77, 0x77, 0x77, 0x76, 0x76, 
	0x76, 0x75, 0x75, 0x74, 0x74, 0x74, 0x74, 0x73, 0x73, 0x73, 0x72, 0x72, 0x72, 0x71, 0x71, 0x71, 
	0x71, 0x70, 0x70, 0x70, 0x70, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 
	0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 
	0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 0x6D, 
	0x6D, 0x6D, 0x6D, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6F, 0x6F, 0x6F, 0x6F, 
	0x6F, 0x6F, 0x6F, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 
	0x71, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x73, 0x73, 0x73, 0x73, 0x73, 0x73, 0x73, 0x74, 
	0x74, 0x74, 0x74, 0x74, 0x74, 0x74, 0x74, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x76, 
	0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x77, 0x78, 0x77, 0x78, 0x78, 0x78, 0x78, 
	0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 
	0x78, 0x78, 0x78, 0x78, 0x79, 0x77, 0x79, 0x77, 0x7A, 0x76, 0x7A, 0x15, 0x15, 0x2B, 0x21, 0x22, 
	0x1B, 0x1A, 0x15, 0x13, 0x0F, 0x0D, 0x0A, 0x08, 0x05, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x06, 0x08, 0x09, 0x0B, 
	0x0D, 0x10, 0x12, 0x14, 0x16, 0x19, 0x1B, 0x1D, 0x20, 0x22, 0x24, 0x27, 0x29, 0x2C, 0x2E, 0x31, 
	0x34, 0x36, 0x39, 0x3C, 0x3E, 0x41, 0x44, 0x46, 0x49, 0x4B, 0x4E, 0x51, 0x53, 0x56, 0x58, 0x5B, 
	0x5D, 0x60, 0x63, 0x65, 0x68, 0x6A, 0x6C, 0x6F, 0x71, 0x73, 0x76, 0x78, 0x7A, 0x7C, 0x7F, 0x81, 
	0x83, 0x85, 0x87, 0x89, 0x8B, 0x8D, 0x8E, 0x90, 0x92, 0x93, 0x95, 0x97, 0x98, 0x9A, 0x9B, 0x9D, 
	0x9E, 0x9F, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAB, 0xAC, 0xAD, 
	0xAD, 0xAE, 0xAF, 0xAF, 0xB0, 0xB0, 0xB0, 0xB1, 0xB1, 0xB1, 0xB1, 0xB2, 0xB2, 0xB2, 0xB2, 0xB2, 
	0xB2, 0xB2, 0xB2, 0xB2, 0xB2, 0xB1, 0xB1, 0xB1, 0xB1, 0xB0, 0xB0, 0xB0, 0xAF, 0xAF, 0xAF, 0xAE, 
	0xAE, 0xAD, 0xAD, 0xAC, 0xAC, 0xAB, 0xAB, 0xAA, 0xA9, 0xA9, 0xA8, 0xA7, 0xA7, 0xA6, 0xA5, 0xA5, 
	0xA4, 0xA3, 0xA3, 0xA2, 0xA1, 0xA1, 0xA0, 0x9F, 0x9E, 0x9E, 0x9D, 0x9C, 0x9B, 0x9B, 0x9A, 0x99, 
	0x99, 0x98, 0x97, 0x96, 0x96, 0x95, 0x94, 0x94, 0x93, 0x92, 0x92, 0x91, 0x90, 0x90, 0x8F, 0x8E, 
	0x8E, 0x8D, 0x8D, 0x8C, 0x8B, 0x8B, 0x8A, 0x8A, 0x89, 0x89, 0x88, 0x88, 0x87, 0x87, 0x86, 0x86, 
	0x86, 0x85, 0x85, 0x84, 0x84, 0x84, 0x83, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x83, 
	0x83, 0x83, 0x83, 0x84, 0x84, 0x84, 0x84, 0x85, 0x85, 0x85, 0x85, 0x85, 0x86, 0x86, 0x86, 0x86, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0x89, 0x89, 0x89, 0x89, 0x8A, 
	0x8A, 0x8A, 0x8A, 0x8A, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 
	0x8C, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 
	0x8E, 0x8E, 0x8E, 0x8E, 0x8F, 0x8E, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 
	0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8E, 
	0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 
	0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0x8C, 0x8C, 0x8C, 
	0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8B, 0x8C, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 
	0x8B, 0x8B, 0x8B, 0x8B, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 
	0x8A, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 
	0x89, 0x89, 0x88, 0x89, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x88, 0x87, 0x87, 0x87, 0x87, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x88, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x86, 0x87, 0x87, 0x86, 0x87, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 
	0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 
	0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x84, 0x84, 0x84, 0x84, 0x84, 
	0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 
	0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 
	0x84, 0x83, 0x84, 0x83, 0x83, 0x84, 0x84, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 
	0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 
	0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 
	0x83, 0x83, 0x82, 0x83, 0x83, 0x82, 0x83, 0x83, 0x83, 0x82, 0x83, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 
	0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7D, 0x7E, 0x7D, 0x7E, 0x7D, 0x7E, 0x7E, 0x7E, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7E, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 
	0x7D, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7D, 0x7C, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 
	0x7C, 0x7D, 0x7C, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7D, 0x7C, 0x7D, 
	0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 
	0x7D, 0x7C, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7C, 0x7D, 0x7D, 
	0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 
	0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 
	0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7C, 0x7C, 0x7D, 0x7D, 
	0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 
};
