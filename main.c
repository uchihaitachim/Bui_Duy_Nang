#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void printHighLowBytes(unsigned short num) {
    unsigned char highByte = (num >> 8) & 0xFF; // Lấy 8 bit cao
    unsigned char lowByte = num & 0xFF;        // Lấy 8 bit thấp

    printf("8 bit cao: %d (0x%02X)\n", highByte, highByte);
    printf("8 bit thấp: %d (0x%02X)\n", lowByte, lowByte);
}

int main() {
    unsigned short number = 1234; // 0x04D2
    printHighLowBytes(number);
    return 0;
}