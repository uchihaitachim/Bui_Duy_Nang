#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

// dem ky tu trong mang
void main() {
	char arr[] = "helobaby";
	int so_ky_tu;
	so_ky_tu = sizeof(arr) / sizeof(arr[0]);
	printf("%d", so_ky_tu);
}