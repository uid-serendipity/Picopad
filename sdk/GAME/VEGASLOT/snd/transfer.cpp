#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 TransferSnd[2201] = {
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x86, 0x88, 0x8B, 0x8E, 
	0x8F, 0x8F, 0x8D, 0x89, 0x84, 0x7D, 0x77, 0x71, 0x6C, 0x69, 0x68, 0x6A, 0x70, 0x79, 0x83, 0x8E, 
	0x98, 0xA0, 0xA4, 0xA6, 0xA5, 0xA2, 0x9B, 0x92, 0x88, 0x7E, 0x75, 0x6E, 0x68, 0x64, 0x62, 0x62, 
	0x64, 0x68, 0x6E, 0x76, 0x80, 0x89, 0x93, 0x9A, 0x9E, 0x9D, 0x98, 0x8E, 0x81, 0x71, 0x63, 0x58, 
	0x52, 0x50, 0x55, 0x5E, 0x6D, 0x7E, 0x8E, 0x9D, 0xA8, 0xB0, 0xB4, 0xB5, 0xB3, 0xAE, 0xA8, 0x9E, 
	0x93, 0x86, 0x78, 0x68, 0x59, 0x4C, 0x42, 0x3D, 0x3E, 0x45, 0x53, 0x66, 0x7B, 0x90, 0xA2, 0xAD, 
	0xB2, 0xAF, 0xA4, 0x95, 0x84, 0x73, 0x65, 0x5B, 0x55, 0x54, 0x57, 0x5E, 0x68, 0x73, 0x81, 0x8F, 
	0x9C, 0xA9, 0xB3, 0xBB, 0xC0, 0xC3, 0xC0, 0xB8, 0xA8, 0x91, 0x75, 0x57, 0x3D, 0x2B, 0x21, 0x1F, 
	0x23, 0x2F, 0x41, 0x57, 0x70, 0x8B, 0xA3, 0xB6, 0xC3, 0xC6, 0xC2, 0xB8, 0xA8, 0x96, 0x82, 0x6C, 
	0x59, 0x4A, 0x41, 0x40, 0x47, 0x55, 0x69, 0x81, 0x99, 0xAF, 0xC1, 0xCD, 0xD3, 0xD1, 0xC9, 0xBA, 
	0xA5, 0x8A, 0x6C, 0x50, 0x37, 0x26, 0x1C, 0x1B, 0x22, 0x30, 0x45, 0x5D, 0x79, 0x94, 0xAD, 0xC1, 
	0xCE, 0xD2, 0xCE, 0xC2, 0xB1, 0x9C, 0x86, 0x6F, 0x5A, 0x49, 0x3E, 0x3A, 0x3F, 0x4E, 0x65, 0x80, 
	0x9C, 0xB3, 0xC4, 0xCF, 0xD3, 0xD2, 0xC8, 0xB7, 0x9D, 0x7D, 0x5C, 0x3F, 0x29, 0x1C, 0x15, 0x16, 
	0x1E, 0x2D, 0x44, 0x61, 0x82, 0xA2, 0xBD, 0xD1, 0xDC, 0xDF, 0xDA, 0xCF, 0xBD, 0xA5, 0x89, 0x6B, 
	0x51, 0x3C, 0x31, 0x31, 0x3B, 0x4E, 0x68, 0x83, 0x9D, 0xB3, 0xC4, 0xD0, 0xD5, 0xD3, 0xC7, 0xB2, 
	0x96, 0x77, 0x58, 0x3F, 0x2C, 0x20, 0x1A, 0x1A, 0x22, 0x33, 0x4E, 0x6F, 0x92, 0xB1, 0xCB, 0xDD, 
	0xE8, 0xEC, 0xE9, 0xDD, 0xC8, 0xAC, 0x8B, 0x6C, 0x51, 0x3E, 0x36, 0x37, 0x41, 0x51, 0x66, 0x7D, 
	0x95, 0xAB, 0xBD, 0xC9, 0xCC, 0xC8, 0xBB, 0xA8, 0x90, 0x75, 0x5A, 0x42, 0x30, 0x24, 0x1E, 0x21, 
	0x2C, 0x40, 0x5B, 0x7A, 0x99, 0xB6, 0xCE, 0xE1, 0xEC, 0xF0, 0xEA, 0xDC, 0xC4, 0xA7, 0x88, 0x6B, 
	0x53, 0x41, 0x37, 0x34, 0x39, 0x44, 0x56, 0x6D, 0x85, 0x9B, 0xAD, 0xB9, 0xBE, 0xBC, 0xB4, 0xA6, 
	0x92, 0x79, 0x5F, 0x47, 0x35, 0x2A, 0x25, 0x28, 0x33, 0x46, 0x5F, 0x7C, 0x9B, 0xB8, 0xCF, 0xDE, 
	0xE5, 0xE3, 0xDB, 0xCB, 0xB5, 0x9C, 0x82, 0x69, 0x52, 0x3F, 0x33, 0x2E, 0x32, 0x3D, 0x4F, 0x63, 
	0x78, 0x8C, 0x9D, 0xAB, 0xB4, 0xB7, 0xB2, 0xA5, 0x92, 0x7B, 0x63, 0x50, 0x40, 0x36, 0x32, 0x34, 
	0x3E, 0x50, 0x68, 0x84, 0xA1, 0xB9, 0xCA, 0xD5, 0xD9, 0xD8, 0xD1, 0xC6, 0xB5, 0xA0, 0x87, 0x6B, 
	0x51, 0x3C, 0x2F, 0x29, 0x2A, 0x33, 0x40, 0x52, 0x68, 0x80, 0x96, 0xA9, 0xB5, 0xB9, 0xB4, 0xAA, 
	0x99, 0x86, 0x72, 0x5E, 0x4D, 0x40, 0x39, 0x39, 0x43, 0x54, 0x6B, 0x84, 0x9C, 0xB1, 0xC2, 0xCF, 
	0xD7, 0xDB, 0xDA, 0xD2, 0xC1, 0xA8, 0x8B, 0x6C, 0x50, 0x39, 0x28, 0x1F, 0x1D, 0x23, 0x32, 0x48, 
	0x63, 0x80, 0x9A, 0xAF, 0xBE, 0xC6, 0xC6, 0xC0, 0xB4, 0xA1, 0x8A, 0x72, 0x5D, 0x4C, 0x43, 0x42, 
	0x48, 0x54, 0x65, 0x7A, 0x92, 0xAA, 0xC0, 0xD1, 0xDC, 0xE1, 0xDD, 0xD2, 0xBD, 0xA1, 0x81, 0x5F, 
	0x40, 0x27, 0x16, 0x0D, 0x0D, 0x17, 0x2B, 0x45, 0x64, 0x83, 0xA1, 0xBA, 0xCC, 0xD7, 0xD9, 0xD2, 
	0xC2, 0xAC, 0x92, 0x77, 0x5F, 0x4B, 0x3D, 0x35, 0x36, 0x3F, 0x52, 0x6D, 0x8B, 0xA8, 0xC0, 0xD2, 
	0xDD, 0xE1, 0xDD, 0xD0, 0xBB, 0x9D, 0x79, 0x55, 0x35, 0x1D, 0x0E, 0x08, 0x0B, 0x17, 0x2B, 0x47, 
	0x68, 0x8C, 0xAF, 0xCB, 0xDF, 0xEA, 0xEA, 0xE2, 0xD2, 0xBA, 0x9E, 0x7F, 0x60, 0x46, 0x32, 0x28, 
	0x2A, 0x37, 0x4F, 0x6E, 0x8D, 0xAA, 0xC1, 0xD2, 0xDC, 0xE0, 0xDC, 0xCD, 0xB4, 0x93, 0x6E, 0x4B, 
	0x2F, 0x1A, 0x0E, 0x09, 0x0C, 0x18, 0x2D, 0x4B, 0x6F, 0x96, 0xB8, 0xD3, 0xE5, 0xEF, 0xF1, 0xEB, 
	0xDC, 0xC4, 0xA4, 0x81, 0x5E, 0x41, 0x2D, 0x26, 0x29, 0x38, 0x4D, 0x68, 0x84, 0x9E, 0xB6, 0xC8, 
	0xD3, 0xD6, 0xD0, 0xBF, 0xA7, 0x89, 0x69, 0x4B, 0x31, 0x1F, 0x13, 0x0E, 0x13, 0x21, 0x39, 0x58, 
	0x7C, 0xA0, 0xC0, 0xD9, 0xEB, 0xF4, 0xF6, 0xED, 0xDB, 0xC0, 0x9E, 0x7B, 0x5C, 0x43, 0x33, 0x2C, 
	0x2E, 0x37, 0x47, 0x5D, 0x77, 0x91, 0xA9, 0xBB, 0xC6, 0xC9, 0xC4, 0xB7, 0xA4, 0x8C, 0x70, 0x55, 
	0x3C, 0x2A, 0x1F, 0x1C, 0x22, 0x30, 0x46, 0x63, 0x85, 0xA7, 0xC6, 0xDD, 0xEC, 0xF2, 0xEF, 0xE4, 
	0xD0, 0xB6, 0x99, 0x7C, 0x60, 0x49, 0x37, 0x2D, 0x2A, 0x31, 0x40, 0x55, 0x6D, 0x86, 0x9B, 0xAC, 
	0xB8, 0xBE, 0xBE, 0xB5, 0xA5, 0x8E, 0x74, 0x5B, 0x46, 0x36, 0x2D, 0x2A, 0x2F, 0x3B, 0x50, 0x6B, 
	0x8A, 0xA9, 0xC3, 0xD6, 0xE0, 0xE3, 0xDF, 0xD6, 0xC8, 0xB5, 0x9D, 0x82, 0x65, 0x4C, 0x37, 0x2A, 
	0x27, 0x2B, 0x36, 0x47, 0x5B, 0x72, 0x8A, 0xA0, 0xB2, 0xBD, 0xBF, 0xB9, 0xAC, 0x99, 0x83, 0x6D, 
	0x59, 0x48, 0x3C, 0x36, 0x38, 0x42, 0x56, 0x6F, 0x8A, 0xA4, 0xB9, 0xCA, 0xD5, 0xDA, 0xDC, 0xD8, 
	0xCF, 0xBD, 0xA3, 0x85, 0x65, 0x49, 0x33, 0x24, 0x1D, 0x1C, 0x24, 0x34, 0x4A, 0x65, 0x81, 0x9C, 
	0xB2, 0xC0, 0xC7, 0xC6, 0xBE, 0xB0, 0x9D, 0x86, 0x6E, 0x58, 0x47, 0x3E, 0x3D, 0x44, 0x51, 0x64, 
	0x7A, 0x92, 0xAA, 0xBE, 0xCF, 0xDA, 0xE1, 0xDF, 0xD5, 0xC2, 0xA8, 0x88, 0x67, 0x48, 0x2D, 0x1A, 
	0x0F, 0x0E, 0x16, 0x28, 0x42, 0x61, 0x81, 0x9F, 0xB8, 0xCB, 0xD7, 0xDB, 0xD6, 0xC7, 0xB2, 0x97, 
	0x7C, 0x63, 0x4F, 0x40, 0x39, 0x3A, 0x42, 0x53, 0x6C, 0x88, 0xA5, 0xBF, 0xD2, 0xDF, 0xE4, 0xE2, 
	0xD7, 0xC3, 0xA7, 0x84, 0x5F, 0x3D, 0x24, 0x14, 0x0D, 0x10, 0x1B, 0x2E, 0x48, 0x66, 0x87, 0xA6, 
	0xC0, 0xD2, 0xDD, 0xDF, 0xD8, 0xCB, 0xB7, 0xA0, 0x87, 0x6E, 0x59, 0x49, 0x40, 0x3F, 0x47, 0x57, 
	0x6E, 0x86, 0x9C, 0xAD, 0xBA, 0xC1, 0xC3, 0xC1, 0xB7, 0xA7, 0x91, 0x77, 0x5F, 0x4B, 0x3E, 0x36, 
	0x34, 0x36, 0x3D, 0x4A, 0x5C, 0x72, 0x8A, 0x9F, 0xAF, 0xBA, 0xC0, 0xC1, 0xBD, 0xB5, 0xA8, 0x97, 
	0x85, 0x72, 0x63, 0x57, 0x52, 0x53, 0x5A, 0x65, 0x72, 0x7F, 0x8C, 0x97, 0x9F, 0xA4, 0xA6, 0xA3, 
	0x9D, 0x92, 0x84, 0x76, 0x69, 0x5E, 0x56, 0x52, 0x50, 0x51, 0x56, 0x5F, 0x6B, 0x79, 0x87, 0x94, 
	0x9D, 0xA4, 0xA7, 0xA8, 0xA5, 0x9F, 0x96, 0x8B, 0x7E, 0x73, 0x6B, 0x65, 0x63, 0x63, 0x66, 0x6B, 
	0x72, 0x7A, 0x82, 0x89, 0x8E, 0x92, 0x92, 0x91, 0x8D, 0x87, 0x80, 0x79, 0x72, 0x6C, 0x68, 0x66, 
	0x65, 0x67, 0x6A, 0x6F, 0x77, 0x7F, 0x87, 0x8D, 0x93, 0x96, 0x98, 0x97, 0x95, 0x90, 0x8B, 0x84, 
	0x7E, 0x78, 0x74, 0x71, 0x6F, 0x6F, 0x70, 0x73, 0x78, 0x7C, 0x81, 0x84, 0x87, 0x89, 0x8A, 0x89, 
	0x87, 0x85, 0x81, 0x7D, 0x79, 0x76, 0x74, 0x73, 0x73, 0x74, 0x76, 0x79, 0x7D, 0x81, 0x85, 0x88, 
	0x8B, 0x8C, 0x8C, 0x8B, 0x8A, 0x88, 0x85, 0x83, 0x7F, 0x7C, 0x79, 0x78, 0x76, 0x76, 0x77, 0x79, 
	0x7B, 0x7D, 0x7F, 0x81, 0x83, 0x85, 0x86, 0x85, 0x85, 0x83, 0x82, 0x80, 0x7E, 0x7D, 0x7C, 0x7B, 
	0x7B, 0x7B, 0x7C, 0x7D, 0x7F, 0x80, 0x82, 0x83, 0x84, 0x84, 0x85, 0x84, 0x84, 0x83, 0x82, 0x81, 
	0x80, 0x7E, 0x7C, 0x7B, 0x7B, 0x7B, 0x7B, 0x7C, 0x7C, 0x7D, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 
	0x83, 0x83, 0x82, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x82, 0x82, 0x82, 0x83, 0x82, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x81, 0x80, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x83, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x82, 0x82, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x83, 0x84, 0x85, 0x85, 0x84, 0x83, 0x80, 0x7E, 0x7B, 0x79, 0x77, 
	0x77, 0x78, 0x7B, 0x80, 0x85, 0x89, 0x8D, 0x90, 0x92, 0x93, 0x93, 0x90, 0x8A, 0x83, 0x7B, 0x73, 
	0x6C, 0x67, 0x65, 0x67, 0x6D, 0x75, 0x7E, 0x87, 0x8F, 0x97, 0x9D, 0xA2, 0xA4, 0xA2, 0x9B, 0x90, 
	0x82, 0x73, 0x66, 0x5B, 0x53, 0x4C, 0x49, 0x4A, 0x50, 0x5C, 0x6C, 0x7E, 0x91, 0xA1, 0xAE, 0xB7, 
	0xBC, 0xBD, 0xB8, 0xAE, 0x9D, 0x89, 0x74, 0x61, 0x53, 0x4A, 0x47, 0x4B, 0x53, 0x60, 0x71, 0x83, 
	0x94, 0xA3, 0xAF, 0xB5, 0xB4, 0xAE, 0xA2, 0x91, 0x7D, 0x68, 0x54, 0x43, 0x37, 0x31, 0x30, 0x36, 
	0x45, 0x59, 0x72, 0x8D, 0xA5, 0xB9, 0xC8, 0xD2, 0xD7, 0xD6, 0xCF, 0xC0, 0xAA, 0x8F, 0x74, 0x5B, 
	0x47, 0x39, 0x33, 0x35, 0x3C, 0x49, 0x59, 0x6B, 0x7F, 0x93, 0xA5, 0xB4, 0xBD, 0xC0, 0xBB, 0xAE, 
	0x98, 0x7D, 0x60, 0x45, 0x30, 0x22, 0x1C, 0x21, 0x30, 0x49, 0x69, 0x8B, 0xAA, 0xC3, 0xD4, 0xDE, 
	0xE1, 0xDD, 0xD3, 0xC4, 0xB0, 0x99, 0x81, 0x68, 0x52, 0x40, 0x31, 0x28, 0x26, 0x2B, 0x37, 0x49, 
	0x61, 0x7D, 0x98, 0xAF, 0xBF, 0xC7, 0xC5, 0xB9, 0xA6, 0x8C, 0x71, 0x59, 0x46, 0x3A, 0x36, 0x3A, 
	0x46, 0x57, 0x6C, 0x84, 0x9B, 0xB0, 0xC0, 0xCC, 0xD3, 0xD7, 0xD6, 0xD0, 0xC5, 0xB3, 0x9B, 0x7E, 
	0x5F, 0x42, 0x2A, 0x1A, 0x13, 0x16, 0x23, 0x3A, 0x58, 0x79, 0x99, 0xB3, 0xC6, 0xCF, 0xD0, 0xC8, 
	0xB9, 0xA5, 0x8F, 0x79, 0x66, 0x56, 0x4B, 0x45, 0x45, 0x4C, 0x59, 0x6C, 0x83, 0x9B, 0xB3, 0xC7, 
	0xD6, 0xE0, 0xE5, 0xE4, 0xD8, 0xC2, 0xA2, 0x7B, 0x53, 0x31, 0x16, 0x06, 0x01, 0x07, 0x16, 0x2F, 
	0x4F, 0x71, 0x93, 0xAF, 0xC5, 0xD4, 0xDB, 0xDB, 0xD3, 0xC5, 0xB2, 0x9A, 0x7F, 0x63, 0x4B, 0x39, 
	0x2F, 0x2E, 0x38, 0x4C, 0x69, 0x8B, 0xAC, 0xC8, 0xDD, 0xEB, 0xF2, 0xEF, 0xE1, 0xC6, 0xA1, 0x76, 
	0x4C, 0x2A, 0x12, 0x05, 0x01, 0x06, 0x13, 0x28, 0x44, 0x65, 0x89, 0xAB, 0xC9, 0xDF, 0xEE, 0xF5, 
	0xF3, 0xE7, 0xD1, 0xB1, 0x8C, 0x66, 0x44, 0x2A, 0x1C, 0x1A, 0x25, 0x3D, 0x5F, 0x85, 0xA9, 0xC7, 
	0xDD, 0xEA, 0xEE, 0xE8, 0xD6, 0xBA, 0x97, 0x70, 0x4D, 0x30, 0x1B, 0x0E, 0x09, 0x0A, 0x14, 0x26, 
	0x42, 0x66, 0x8D, 0xB4, 0xD5, 0xED, 0xFC, 0xFF, 0xFC, 0xEC, 0xD1, 0xAC, 0x83, 0x5B, 0x39, 0x22, 
	0x17, 0x19, 0x28, 0x41, 0x60, 0x82, 0xA0, 0xB8, 0xC9, 0xD2, 0xD3, 0xCB, 0xBB, 0xA5, 0x89, 0x6D, 
	0x50, 0x38, 0x24, 0x16, 0x0F, 0x10, 0x19, 0x2D, 0x4B, 0x71, 0x99, 0xBE, 0xDB, 0xEF, 0xF8, 0xF8, 
	0xED, 0xD8, 0xBA, 0x97, 0x73, 0x53, 0x3A, 0x2C, 0x28, 0x2E, 0x3B, 0x4E, 0x64, 0x7A, 0x8F, 0x9F, 
	0xAC, 0xB3, 0xB6, 0xB2, 0xA9, 0x9A, 0x85, 0x6D, 0x54, 0x3D, 0x2B, 0x1F, 0x1B, 0x21, 0x30, 0x4A, 
	0x6A, 0x8E, 0xAF, 0xCA, 0xDC, 0xE5, 0xE5, 0xDE, 0xD0, 0xBA, 0xA1, 0x87, 0x6E, 0x59, 0x4A, 0x41, 
	0x3E, 0x40, 0x46, 0x4F, 0x5A, 0x68, 0x77, 0x87, 0x96, 0xA2, 0xAA, 0xAC, 0xA7, 0x9B, 0x88, 0x72, 
	0x5B, 0x47, 0x39, 0x32, 0x34, 0x3F, 0x51, 0x6A, 0x85, 0x9E, 0xB4, 0xC4, 0xCD, 0xD1, 0xCF, 0xC9, 
	0xBE, 0xB0, 0xA1, 0x90, 0x7F, 0x6E, 0x5D, 0x4F, 0x43, 0x3C, 0x3A, 0x3E, 0x48, 0x58, 0x6D, 0x83, 
	0x98, 0xA9, 0xB4, 0xB6, 0xB0, 0xA2, 0x90, 0x7C, 0x6A, 0x5B, 0x52, 0x4F, 0x51, 0x59, 0x65, 0x74, 
	0x84, 0x94, 0xA3, 0xB1, 0xBB, 0xC3, 0xC7, 0xC9, 0xC7, 0xC2, 0xB6, 0xA5, 0x8F, 0x75, 0x5A, 0x42, 
	0x2F, 0x23, 0x20, 0x27, 0x37, 0x4E, 0x69, 0x86, 0x9F, 0xB2, 0xBD, 0xC0, 0xBC, 0xB3, 0xA5, 0x95, 
	0x85, 0x76, 0x6A, 0x5F, 0x59, 0x55, 0x58, 0x5E, 0x6A, 0x7B, 0x8E, 0xA3, 0xB7, 0xC7, 0xD3, 0xDB, 
	0xDC, 0xD5, 0xC5, 0xAA, 0x89, 0x65, 0x43, 0x28, 0x16, 0x0E, 0x11, 0x1C, 0x31, 0x4C, 0x6A, 0x88, 
	0xA2, 0xB8, 0xC6, 0xCF, 0xD2, 0xCE, 0xC5, 0xB6, 0xA3, 0x8C, 0x73, 0x5C, 0x49, 0x3D, 0x39, 0x3E, 
	0x4D, 0x65, 0x82, 0xA0, 0xBC, 0xD2, 0xE2, 0xEA, 0xEA, 0xDE, 0xC7, 0xA6, 0x7F, 0x57, 0x36, 0x1E, 
	0x0F, 0x09, 0x0C, 0x18, 0x2A, 0x44, 0x63, 0x83, 0xA2, 0xBE, 0xD5, 0xE4, 0xEC, 0xEB, 0xE1, 0xCD, 
	0xB1, 0x8E, 0x6A, 0x4A, 0x30, 0x21, 0x1E, 0x27, 0x3C, 0x5B, 0x7E, 0xA1, 0xBF, 0xD6, 0xE4, 0xEA, 
	0xE6, 0xD7, 0xBD, 0x9C, 0x77, 0x54, 0x37, 0x22, 0x14, 0x0D, 0x0D, 0x14, 0x23, 0x3B, 0x5B, 0x81, 
	0xA7, 0xC9, 0xE3, 0xF3, 0xFB, 0xF9, 0xEB, 0xD3, 0xB1, 0x8A, 0x63, 0x42, 0x29, 0x1C, 0x1C, 0x28, 
	0x3F, 0x5E, 0x7E, 0x9C, 0xB4, 0xC5, 0xCE, 0xCF, 0xC8, 0xB9, 0xA3, 0x89, 0x6D, 0x51, 0x3A, 0x26, 
	0x19, 0x12, 0x12, 0x1A, 0x2D, 0x49, 0x6D, 0x94, 0xB9, 0xD7, 0xEB, 0xF6, 0xF7, 0xEE, 0xDA, 0xBD, 
	0x9A, 0x76, 0x56, 0x3D, 0x2E, 0x2A, 0x30, 0x3E, 0x51, 0x67, 0x7D, 0x91, 0xA1, 0xAC, 0xB2, 0xB4, 
	0xB0, 0xA7, 0x98, 0x85, 0x6F, 0x57, 0x41, 0x2F, 0x23, 0x1E, 0x22, 0x30, 0x47, 0x66, 0x88, 0xAA, 
	0xC6, 0xDA, 0xE5, 0xE6, 0xE0, 0xD2, 0xBD, 0xA4, 0x89, 0x71, 0x5C, 0x4D, 0x45, 0x43, 0x46, 0x4D, 
	0x57, 0x62, 0x6F, 0x7C, 0x8A, 0x96, 0xA1, 0xA8, 0xA9, 0xA5, 0x99, 0x88, 0x74, 0x5E, 0x4C, 0x3F, 
	0x39, 0x3C, 0x46, 0x58, 0x6E, 0x87, 0x9F, 0xB2, 0xC1, 0xC9, 0xCB, 0xC7, 0xC0, 0xB6, 0xA9, 0x9B, 
	0x8D, 0x80, 0x73, 0x68, 0x5F, 0x58, 0x54, 0x53, 0x54, 0x5A, 0x64, 0x71, 0x7F, 0x8D, 0x98, 0x9F, 
	0xA1, 0x9E, 0x96, 0x8B, 0x7F, 0x73, 0x6A, 0x65, 0x63, 0x65, 0x6B, 0x73, 0x7D, 0x87, 0x90, 0x98, 
	0x9E, 0xA3, 0xA6, 0xA6, 0xA6, 0xA4, 0xA0, 0x9A, 0x92, 0x88, 0x7C, 0x70, 0x65, 0x5C, 0x57, 0x56, 
	0x58, 0x5F, 0x69, 0x75, 0x80, 0x8A, 0x92, 0x97, 0x98, 0x96, 0x92, 0x8C, 0x86, 0x80, 0x7B, 0x76, 
	0x73, 0x71, 0x71, 0x72, 0x75, 0x79, 0x7F, 0x85, 0x8A, 0x90, 0x94, 0x98, 0x99, 0x99, 0x97, 0x92, 
	0x8A, 0x80, 0x75, 0x6B, 0x63, 0x5E, 0x5D, 0x5D, 0x61, 0x67, 0x70, 0x78, 0x80, 0x87, 0x8C, 0x8F, 
	0x90, 0x90, 0x8F, 0x8D, 0x89, 0x84, 0x7F, 0x7A, 0x75, 0x71, 0x6F, 0x6F, 0x70, 0x74, 0x7A, 0x80, 
	0x86, 0x8B, 0x8F, 0x91, 0x92, 0x92, 0x90, 0x8B, 0x84, 0x7C, 0x75, 0x70, 0x6B, 0x69, 0x69, 0x6A, 
	0x6D, 0x70, 0x75, 0x7A, 0x80, 0x85, 0x89, 0x8C, 0x8E, 0x8F, 0x8F, 0x8D, 0x8A, 0x85, 0x81, 0x7C, 
	0x78, 0x75, 0x74, 0x74, 0x75, 0x78, 0x7C, 0x80, 0x84, 0x87, 0x89, 0x8B, 0x8C, 0x8B, 0x88, 0x84, 
	0x80, 0x7D, 0x79, 0x77, 0x75, 0x75, 0x75, 0x76, 0x76, 0x78, 0x7B, 0x7E, 0x82, 0x85, 0x88, 0x8A, 
	0x8B, 0x8B, 0x8B, 0x8A, 0x88, 0x84, 0x82, 0x7F, 0x7D, 0x7C, 0x7B, 0x7C, 0x7D, 0x7F, 0x80, 0x82, 
	0x84, 0x86, 0x86, 0x87, 0x86, 0x86, 0x85, 0x84, 0x82, 0x81, 0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7D, 
	0x7E, 0x7E, 0x80, 0x81, 0x82, 0x84, 0x85, 0x86, 0x86, 0x86, 0x86, 0x85, 0x84, 0x83, 0x82, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
};
