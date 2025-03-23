#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"toan.h"
//dem ky tu trong chuoi dung con tro
void main() {
	char arr[] = "heloc baby come on baby";
	int x = dem_ky_tu(arr);
	int y = dem_space(arr);
	printf("so ky tu cua chuoi la: %d\n", x);
	printf("so ky tu space cua chuoi la: %d\n", y);
	//in_hoa(arr);
	dem_so_tu(arr);
	in_hoa_ki_tu(arr);
	printf("\n");
	tim_dc_c(arr);
	
}





