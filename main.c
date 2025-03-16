#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"toan.h"

void main() {
	int myArr[5];
	int size = 5;	
	nhap(myArr, size);
	int x;
	x=tongmang(myArr, size);
	float tble;
	printf("\n-----------\n");
	tbsole(myArr, size);
	printf("\n----------- \n");
	printf("sum:%d", x);
	printf("\n-----------\n");
	inmax(myArr, size);
	printf("\n-----------\n");
	thayso0(myArr, size);
	printf("\n-----------\n");
	in_so_nguyen_to(myArr, size);
}
