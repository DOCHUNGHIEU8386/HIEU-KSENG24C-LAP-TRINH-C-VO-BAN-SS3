#include <stdio.h>

int main() {
    float base, height, area;

    // Yêu c?u ngu?i dùng nh?p d? dài c?nh dáy c?a tam giác
    printf("Nh?p d? dài c?nh dáy c?a tam giác: ");
    scanf("%f", &base);

    // Yêu c?u ngu?i dùng nh?p chi?u cao c?a tam giác
    printf("Nh?p chi?u cao c?a tam giác: ");
    scanf("%f", &height);

    // Tính di?n tích tam giác
    area = (base * height) / 2;

    // Hi?n th? k?t qu?
    printf("Di?n tích c?a tam giác là: %.2f\n", area);

    return 0;
}


