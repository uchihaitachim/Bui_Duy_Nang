#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"toan.h"
typedef struct {
	int tu;
	int mau;
}phan_so_t;

phan_so_t NhanPhanSo(phan_so_t A, phan_so_t B) {
	phan_so_t phansokq;
	phansokq.tu = A.tu * B.tu;
	phansokq.mau = A.mau * B.mau;
	return phansokq;
}

void main() {
	phan_so_t A;
	phan_so_t B;

	A.tu = 1;
	A.mau = 2;

	B.tu = 3;
	B.mau = 4;
	phan_so_t phansokq = NhanPhanSo(A, B);
	printf("%d/%d", phansokq.tu, phansokq.mau);

}





