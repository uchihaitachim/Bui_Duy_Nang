#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char light;
    char fan;
    char motor;
} smartHome_t;

// Hàm xử lý chuỗi để lấy trạng thái của thiết bị
smartHome_t pair_data(const char* data) {
    smartHome_t homeStatus = { 0, 0, 0 }; // Khởi tạo trạng thái mặc định

    // Tìm vị trí bắt đầu của JSON trong chuỗi (bỏ qua phần HTTP header)
    const char* jsonStart = strchr(data, '{');
    if (!jsonStart) {
        return homeStatus; // Nếu không tìm thấy JSON, trả về giá trị mặc định
    }

    // Kiểm tra trạng thái của từng thiết bị
    if (strstr(jsonStart, "\"light\": \"on\"")) homeStatus.light = 1;
    if (strstr(jsonStart, "\"fan\": \"on\"")) homeStatus.fan = 1;
    if (strstr(jsonStart, "\"motor\": \"on\"")) homeStatus.motor = 1;

    return homeStatus;
}

int main() {
    const char* data = "HTTP1.1 200 OK{\"light\": \"on\", \"fan\": \"off\", \"motor\": \"off\"}";

    smartHome_t x = pair_data(data);

    // In kết quả
    printf("Light: %d\n", x.light);
    printf("Fan: %d\n", x.fan);
    printf("Motor: %d\n", x.motor);

    return 0;
}