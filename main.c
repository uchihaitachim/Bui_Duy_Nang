#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include<malloc.h>
typedef union {
	struct {
		char bit_0 : 1;
		char bit_1 : 1;
		char bit_2 : 1;
		char bit_3 : 1;
		char bit_4 : 1;
		char bit_5 : 1;
		char bit_6 : 1;
		char bit_7 : 1;
	}bit;
	unsigned char toan_bo_gia_tri;

}test_union_t;
void main() {
	test_union_t x = { 0 };
	x.bit.bit_0 = 1;
	x.bit.bit_2 = 1;
	int temp=x.toan_bo_gia_tri;
	// 0x00000101 = 5= temp
	
}	