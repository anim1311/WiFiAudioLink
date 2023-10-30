#ifndef GIF_H
#define GIF_H


#define GIF_WIDTH   43
#define GIF_HEIGHT  32

// 'output-onlinegiftools (1)', 43x32px
const unsigned char gif1 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x9c, 0x00, 0x01, 0x00, 0x00, 0x01, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x81, 0x3f, 0xfc, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x09, 0xff, 0x3c, 0x80, 0x00, 0xff, 0x29, 0xff, 0xdc, 
	0x00, 0x00, 0x00, 0x0f, 0xfb, 0xec, 0x60, 0x00, 0x00, 0x05, 0xfd, 0xec, 0x40, 0x00, 0x00, 0xc7, 
	0x78, 0x8c, 0x80, 0x00, 0x00, 0x47, 0x0d, 0xac, 0x00, 0x00, 0x01, 0x47, 0xfe, 0x6c, 0x00, 0x00, 
	0x00, 0x43, 0xfc, 0x1c, 0x00, 0x00, 0x00, 0x4b, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x13, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x1a, 0xff, 0xf0, 0x02, 0x00, 0x04, 0x3b, 
	0xff, 0xe0, 0x02, 0x00, 0x0c, 0x3b, 0x7f, 0xfc, 0x08, 0x00, 0x08, 0x02, 0x7f, 0xfc, 0x00, 0xc0, 
	0x00, 0xc0, 0x7f, 0xf4, 0x00, 0x00, 0x60, 0x0d, 0xff, 0xfc, 0x00, 0x00, 0x6f, 0xe1, 0x00, 0x0c, 
	0x00, 0x00, 0x0f, 0xff, 0xfc, 0xfe, 0x00, 0x00, 0xcf, 0xe1, 0xf0, 0x01, 0xfc, 0x00, 0x4f, 0xc0, 
	0x00, 0x01, 0xfe, 0x00, 0x00, 0xc0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00
};
// 'output-onlinegiftools (2)', 43x32px
const unsigned char gif2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xb0, 0x00, 0x01, 0x00, 0x00, 0x01, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x81, 0xbf, 0xfc, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x09, 0xff, 0x3c, 0x80, 0x00, 0xff, 0x09, 0xf7, 0xfc, 
	0xc0, 0x00, 0x00, 0x0f, 0xfb, 0xec, 0x60, 0x00, 0x00, 0x09, 0xfd, 0xec, 0x80, 0x00, 0x00, 0xc7, 
	0x78, 0x0c, 0x00, 0x00, 0x00, 0xc7, 0x7d, 0x6c, 0x00, 0x00, 0x01, 0x47, 0xfe, 0xdc, 0x00, 0x00, 
	0x00, 0xc7, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x33, 0xff, 0xfd, 0x00, 0x00, 0x13, 0x1a, 0xff, 0xe0, 0x00, 0x80, 0x00, 0x3b, 
	0xff, 0xe0, 0x09, 0x00, 0x20, 0x3a, 0x7f, 0xfc, 0x07, 0x00, 0x20, 0x02, 0x7f, 0xf4, 0x01, 0xc0, 
	0x38, 0x43, 0xff, 0xf4, 0x19, 0x00, 0x69, 0x09, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xe1, 0x00, 0x0c, 
	0x00, 0x00, 0x0f, 0xff, 0xfc, 0xfe, 0x00, 0x00, 0xcf, 0xe1, 0xf0, 0x01, 0xfc, 0x00, 0x4f, 0xc0, 
	0x00, 0x01, 0xfe, 0x00, 0x00, 0xc0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00
};
// 'output-onlinegiftools (3)', 41x32px
const unsigned char gif3 [] PROGMEM = {
	0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x60, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x02, 0x00, 0x00, 0x00, 0x83, 0xff, 0xea, 0x00, 0x00, 
	0x00, 0x93, 0xfe, 0xe0, 0x00, 0x00, 0x00, 0x83, 0xff, 0xf9, 0x00, 0x00, 0xfe, 0x8b, 0xf7, 0xf9, 
	0x00, 0x00, 0x00, 0x8b, 0xfb, 0xd9, 0x00, 0x00, 0x00, 0x8a, 0xf8, 0x19, 0x00, 0x00, 0x00, 0xc6, 
	0x03, 0xb8, 0x00, 0x00, 0x02, 0x47, 0xf1, 0xb8, 0x00, 0x00, 0x00, 0xc7, 0x8f, 0x78, 0x00, 0x00, 
	0x00, 0x97, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x17, 0xff, 0x7e, 0x00, 0x00, 0x00, 0x17, 0xff, 0xfa, 
	0x00, 0x00, 0x3f, 0xb5, 0xfe, 0xc0, 0x80, 0x00, 0x00, 0x3b, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x3a, 
	0xff, 0xf8, 0x00, 0x00, 0x02, 0x00, 0x7f, 0xf8, 0x27, 0x00, 0x00, 0x0b, 0xff, 0xf8, 0x26, 0x00, 
	0x7f, 0x1b, 0xff, 0xf8, 0x00, 0x00, 0x7f, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xdf, 0xf9, 0xf8, 
	0x00, 0x00, 0xcf, 0xc1, 0xc0, 0x03, 0xf8, 0x00, 0x4f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0xc0, 
	0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'output-onlinegiftools (4)', 43x32px
const unsigned char gif4 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 
	0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x03, 0xff, 0xfc, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x09, 0xfe, 0x3c, 0x80, 0x00, 0xfe, 0x09, 0xbd, 0xdc, 
	0xc0, 0x00, 0x00, 0x0f, 0xfb, 0xec, 0xe0, 0x00, 0x00, 0x09, 0xfd, 0xcc, 0x80, 0x00, 0x00, 0x47, 
	0x78, 0x0c, 0x00, 0x00, 0x00, 0x47, 0x78, 0x5c, 0x00, 0x00, 0x00, 0x47, 0xfc, 0xdc, 0x00, 0x00, 
	0x00, 0x47, 0xfc, 0x7c, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x13, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x1a, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x3b, 
	0xff, 0xe4, 0x00, 0x00, 0x01, 0x3a, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x02, 0x7f, 0xf4, 0x13, 0xc0, 
	0x0e, 0x09, 0xff, 0xfc, 0x11, 0x00, 0x6f, 0x89, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xe1, 0x00, 0x0c, 
	0x00, 0x00, 0x0f, 0xff, 0xfc, 0xfe, 0x00, 0x00, 0xcf, 0xe1, 0xf0, 0x01, 0xfc, 0x00, 0xcf, 0xc0, 
	0x00, 0x01, 0xfe, 0x00, 0x00, 0xc0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00
};
// 'output-onlinegiftools (5)', 43x32px
const unsigned char gif5 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x87, 0xe0, 0x01, 0x00, 0x00, 0x01, 0xe0, 
	0x00, 0x00, 0x80, 0x00, 0x01, 0x40, 0x00, 0x00, 0x80, 0x00, 0x08, 0x40, 0x00, 0x00, 0x80, 0x00, 
	0x00, 0x4f, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x44, 0xbf, 0x38, 0x00, 0x00, 0xfe, 0x34, 0xff, 0x3c, 
	0x40, 0x00, 0x00, 0x07, 0xff, 0xee, 0x40, 0x00, 0x00, 0x05, 0xfd, 0xfe, 0x40, 0x00, 0x00, 0x47, 
	0x7c, 0xe6, 0x40, 0x00, 0x01, 0x4b, 0x00, 0xce, 0x00, 0x00, 0x01, 0x6b, 0xbc, 0xae, 0x00, 0x00, 
	0x00, 0x4b, 0xc7, 0xee, 0x00, 0x00, 0x00, 0x4b, 0xfe, 0x1f, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x13, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x3a, 
	0xff, 0xf0, 0x00, 0x00, 0x00, 0x3b, 0xff, 0xf4, 0x00, 0x00, 0x01, 0x02, 0x7f, 0xfc, 0x09, 0xc0, 
	0x0c, 0x00, 0x7f, 0xf4, 0x19, 0x00, 0x6f, 0x05, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xe1, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0xfc, 0xfe, 0x00, 0x00, 0xcf, 0xe1, 0xf0, 0x01, 0xfc, 0x00, 0xcf, 0xc0, 
	0x00, 0x01, 0xfc, 0x80, 0x00, 0xc0, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00
};



#endif