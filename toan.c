#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//nhap kich thuowc mang va cac phan tu trong mang tu ban phim
void nhap(int arr[], int kt) {
	for (int i = 0;i < kt;i++) {
		printf("nhap vao gia tri arr[%d]:", i);
		scanf("%d", &arr[i]);
	}
}
//tinh tong cac pt trong mang
int tongmang(int arr[], int kt) {
	int i;
	int sum = 0;
	for (i = 0;i < kt;i++) {
		sum += arr[i];
	}
	return sum;
}
//tinh trung binh cac so le
void tbsole(int arr[], int kt) {
	float tong = 0;
	float j = 0;
	float a;
	for (int i = 0;i < kt;i++) {
		if (arr[i] % 2 == 1) {
			tong = tong + arr[i];
			j++;
		}
	}
	a = (float)(tong / j);
	printf("trung binh cac so le: %.4f", a);
}
//in ra man so max va vi tri cua no
void inmax(int arr[], int kt) {
	int vitri = 0;
	int somax = arr[0];
	for (int i = 1;i < kt;i++) {
		if (arr[i] > somax) {
			somax = arr[i];
			vitri = i;
		}
	}
	printf("so lon nhat la %d vi tri thu %d", somax, vitri);
}
//thay so am bang so 0 va in ra mang sau khi thay
void thayso0(int arr[], int kt) {
	for (int i = 0;i < kt;i++) {
		if (arr[i] < 0) {
			arr[i] = 0;
		}
	}
	printf("mang sau thay so am bang so 0:\n");
	for (int i = 0;i < kt;i++) {
		printf("%d ", arr[i]);
	}
}
void in_so_nguyen_to(int arr[], int kt) {
	printf("mang co cac so nguyen to la:\n");
	for (int i = 0;i < kt;i++) {
		int a = 1;
		if (arr[i] < 2) {
			a = 0;
		}
		else {
			for (int j = 2;j <=sqrt(arr[i]);j++) {
				if (arr[i] % j == 0) {
					a = 0;
					break;
				}
			}
		}
		if (a == 1) { 
			printf("%d ", arr[i]);
		}
	}
}