#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// dem ky tu trong chuoi
int dem_ky_tu(char* str) {
	int bien_dem = 0;
	while (*str != 0) {
		bien_dem++;
		str++;
	}
	return bien_dem;
}
//dem ky tu dau cach co trong chuoi dung con tro
int dem_space(char* str) {
	int bien_dem = 0;
	while (*str != 0) {
		if (*str == ' ') {
			bien_dem++;
		}
		str++;
	}
	return bien_dem;

}
// doi ky tu in thuong thanh in hoa 
/*void in_hoa(char* str) {
	while (*str != 0) {
		if (*str >= 97 && *str <= 122) {
			*str =*str-32;
			printf("%c", *str);
		}
		else {
			printf("%c", *str);
		}
			str++;
	}
}*/
// dem so tu trong chuoi
void dem_so_tu(char* str) {
	int bien_dem=0;
	bool x = false;
	while (*str) {
		if (*str == ' ' || *str == '\t' || *str == '\n') {
			x = false;
		} 
		else if(!x){
			x = true;
			bien_dem++; 
		}
		str++;
	}
	printf("so tu trong chuoi la :%d\n", bien_dem);
}  
// ham in hoa ki tu dau moi tu trong chuoi
void in_hoa_ki_tu(char* str) {
	int in_hoa = 1;
	while (*str != 0) {
		if (*str == ' ' || *str == '\t' || *str == '\n') {
			in_hoa = 1;
			printf("%c", *str);
		}
		else if (in_hoa) {
			*str = *str - 32;
			printf("%c", *str);
			in_hoa = 0;

		}
		else {
			printf("%c", *str);
		}
		str++;
	}
}
// tim ki tu c o vi tri nao
void tim_dc_c(char* str) {

	while (*str != 0) {
		if (*str == 'c'||*str=='C') {
			printf("%p\n", str);
		}
		str++;
	}
} 