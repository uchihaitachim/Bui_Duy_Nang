#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <iostream>
#include <cmath>

class QuadraticEquation {
private:
    double a, b, c;

public:
    // Constructor
    QuadraticEquation(double coefA, double coefB, double coefC) {
        a = coefA;
        b = coefB;
        c = coefC;
    }

    // Phương thức tính và hiển thị nghiệm
    void solve() {
        if (a == 0) {
            std::cout << "Không phải phương trình bậc hai." << std::endl;
            return;
        }

        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            std::cout << "Phương trình có hai nghiệm phân biệt:\n";
            std::cout << "x1 = " << x1 << "\n";
            std::cout << "x2 = " << x2 << "\n";
        }
        else if (delta == 0) {
            double x = -b / (2 * a);
            std::cout << "Phương trình có một nghiệm kép: x = " << x << std::endl;
        }
        else {
            std::cout << "Phương trình không có nghiệm thực." << std::endl;
        }
    }
};

int main() {
    // Khởi tạo đối tượng với hệ số a, b, c
    QuadraticEquation equation(1, -3, 2);
    equation.solve();

    return 0;
}