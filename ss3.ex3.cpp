#include <stdio.h>
#define PI 3.14
int main() {
float radius;
float circumference, area;
// Nh?p bán kính hình tròn t? bàn phím
printf("Nh?p bán kính hình tròn: ");
scanf("%f", &radius);
// Tính chu vi hình tròn
circumference = 2 * PI *
// Tính di?n tích hình tròn
area = PI * radius * radius;
// In k?t qu? v?i 2 ch? s? th?p phân
printf("Chu vi hình tròn: %.2f\n", circumference);
printf("Di?n tích hình tròn: %.2f\n", area);
return 0;
}
