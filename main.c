#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include<malloc.h>
typedef struct {
	char bit_0 : 1;
	char bit_1 : 1;
	char bit_2 : 1;
	char bit_3 : 1;
	char bit_4 : 1;
	char bit_5 : 1;
	char bit_6 : 1;
	char bit_7 : 1;
}byte_t;
typedef struct {
	int x;
	char y;
}test_struct_t;
typedef union {
	unsigned short x;
	unsigned char y[2];
}test_union_t;
void main() {
	unsigned short val = 0x1234;
	unsigned char low;
	unsigned char high;
	test_union_t n;
	n.x = val;
	low = n.y[0];
	high = n.y[1];
} 