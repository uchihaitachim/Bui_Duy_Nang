#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"toan.h"
typedef struct {
	int tu;
	int mau;
}phan_so_t;

// Hàm tính UCLN (Ước chung lớn nhất)
int ucln(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
phan_so_t rutGon(phan_so_t ps) {
	int u = ucln(ps.tu, ps.mau);
	ps.tu /= u;
	ps.mau /= u;
	return ps;
}
phan_so_t NhanPhanSo(phan_so_t A, phan_so_t B) {
	phan_so_t phansokq;
	phansokq.tu = A.tu * B.tu;
	phansokq.mau = A.mau * B.mau;
	return rutGon(phansokq);
}
phan_so_t TruPhanSo(phan_so_t A, phan_so_t B) {
	phan_so_t phansokq;
	phansokq.tu = A.tu * B.mau - B.tu * A.mau; // Quy đồng và trừ tử
	phansokq.mau = A.mau * B.mau;             // Nhân mẫu
	return rutGon(phansokq);                  // Rút gọn kết quả
}
// Hàm cộng phân số
phan_so_t CongPhanSo(phan_so_t A, phan_so_t B) {
	phan_so_t phansokq;
	phansokq.tu = A.tu * B.mau + B.tu * A.mau; // Quy đồng và cộng tử
	phansokq.mau = A.mau * B.mau;             // Nhân mẫu
	return rutGon(phansokq);                  // Rút gọn kết quả
}

// Hàm chia phân số
phan_so_t ChiaPhanSo(phan_so_t A, phan_so_t B) {
	phan_so_t phansokq;
	phansokq.tu = A.tu * B.mau;               // Nhân tử với mẫu
	phansokq.mau = A.mau * B.tu;              // Nhân mẫu với tử
	return rutGon(phansokq);                  // Rút gọn kết quả
}
void main() {
	phan_so_t A;
	phan_so_t B;

	A.tu = 4;
	A.mau = 2;

	B.tu = 2;
	B.mau = 4;
	phan_so_t kqcong = NhanPhanSo(A, B);
	phan_so_t kqnhan = CongPhanSo(A, B);
	phan_so_t kqtru = ChiaPhanSo(A, B);
	phan_so_t kqchia = TruPhanSo(A, B);
	printf("%d/%d\n", kqcong.tu, kqcong.mau);
	printf("%d/%d\n", kqtru.tu, kqtru.mau);
	printf("%d/%d\n", kqnhan.tu, kqnhan.mau);
	printf("%d/%d", kqchia.tu, kqchia.mau);

}





