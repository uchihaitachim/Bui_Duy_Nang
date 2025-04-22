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
	int x;
	char y;
}test_union_t;
void main() {
	byte_t x = { 0 };
	x.bit_0 = 1;
	x.bit_2 = 1;
	x.bit_3 = 1;
	x.bit_5 = 1;
	x.bit_6 = 1;
}