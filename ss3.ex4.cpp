#include <stdio.h>
#define PI 3.14159

int main() {
    float r, circumference, area;

    // Yêu c?u ngu?i dùng nh?p bán kính hình tròn
    printf("Nh?p bán kính c?a hình tròn: ");
    scanf("%f", &r);

    // Tính chu vi hình tròn
    circumference = 2 * PI * r;

    // Tính di?n tích hình tròn
    area = PI * r * r;

    // In k?t qu? v?i 2 s? th?p phân
    printf("Chu vi c?a hình tròn là: %.2f\n", circumference);
    printf("Di?n tích c?a hình tròn là: %.2f\n", area);

    return 0;
}

