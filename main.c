#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include<malloc.h>
#include<math.h>
float fx(float x) {
	return x * x;
}
float gx(float x) {
	return 2 * x * x + x + 1;
}
float tx(float x) {
	return 2 * sin(x) + 1;
}
float tinhTichPhan(float a, float b) {
	float S = 0;
	float h = (b - a) / 1000;
	for (int i = 1;i < 1000;i++) {
		float db = fx(a + h*i);
		float dl = fx(a + (i + 1) * h);
		S += ((dl + db) * h) / 2;
	} 
	return S;
}
float function(int x, char y) {
	printf("ham function da duoc chay(x=%d)...\n",x);   
}
void function_1() {
	printf("day la ham 1\n");
} 
void main() {
	float (*ten_con_tro_ham)(int, char); 
	ten_con_tro_ham = function;
	ten_con_tro_ham(1, 2);
	void(*ten_contr_ham_1)();
	ten_contr_ham_1 = function_1;
	ten_contr_ham_1();
	  
}