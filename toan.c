#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int cong(int a, int b) {
	int kqcong;
	kqcong = a + b;
	return kqcong;
}
int tru(int a, int b) {
	int kqtru;
	kqtru = a - b;
	return kqtru;
}int nhan(int a, int b) {
	int kqnhan;
	kqnhan = a * b;
	return kqnhan;
}int chia(int a, int b) {
	int kqchia;
	kqchia = a / b;
	return kqchia;
}