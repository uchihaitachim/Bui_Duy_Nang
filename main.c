#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct {
    char Ten[30];
    char GioiTinh[5];
    int Tuoi;
    float DiemToan, DiemVan, DiemTB;
    char XepLoai[10];
}HocSinh;
void Nhaptths(HocSinh* sv) {
    printf("Nhap ten hs:");
    getchar();
    scanf("%[^\n]", sv->Ten);
    printf("Nhap gioi tinh:");
    scanf("%s", sv->GioiTinh);
    printf("Nhap tuoi:");
    scanf("%d", &sv->Tuoi);
    printf("Nhap diem toan:");
    scanf("%f", &sv->DiemToan);
    printf("Nhap diem van:");
    scanf("%f", &sv->DiemVan);;
    sv->DiemTB = (sv->DiemToan + sv->DiemVan) / 2;
    printf("Diem trung binh: %.2f\n", sv->DiemTB);
}
void InSV(HocSinh *sv) {
    printf("Ho va Ten: %s\n", sv->Ten);
    printf("Tuoi: %d\n", sv->Tuoi);
    printf("Gioi tinh: %s\n", sv->GioiTinh);
    printf("Diem toan: %.2f\n", sv->DiemToan);
    printf("Dien van: %.2f\n", sv->DiemVan);
    printf("Diem trung binh: %.2f\n", sv->DiemTB);
}
    HocSinh* HsDtbMax(HocSinh* sv, int n) {
    HocSinh* HsMax = &sv[0];
    for (int i = 0;i < n;i++) {
        if (sv[i].DiemTB > HsMax->DiemTB) {
            HsMax = &sv[i];
        }
    }
    return HsMax;
} 
    void SXDiemTB(HocSinh *sv,int n){
        for (int i = 0;i < n-1;i++) {
            for (int j = i + 1;j < n;j++) {
                if ((sv + i)->DiemTB < (sv + j)->DiemTB) {
                    HocSinh x = *(sv + i);
                    *(sv + i) = *(sv + j);
                    *(sv + j) = x;
                }

            }
        }
    }
int main() {  
    int n; 
    printf("Nhap so hoc sinh:");
    scanf("%d", &n);
    HocSinh* kt = (HocSinh*)malloc(n * sizeof(HocSinh));
    for (int i = 0;i < n;i++) {
        printf("-------Nhap hoc sinh thu %d-------\n", i + 1);
        Nhaptths(&kt[i]);
    }
    for (int i = 0;i < n;i++) {
        printf("-------Hoc sinh thu %d-------\n",i+1 );
        InSV(&kt[i]);
    }
    HocSinh *HsMax=HsDtbMax(kt,n);
    printf("\n---------Hoc sinh co diem trung binh cao nhat----------\n");
    InSV(HsMax);
    SXDiemTB(kt, n);
    printf("\n---------Danh sach sinh vien theo diem trung binh---------\n");
    for (int a = 0;a < n;a++) {
        InSV(&kt[a]);
    }
    free(kt);
    return 0;
}