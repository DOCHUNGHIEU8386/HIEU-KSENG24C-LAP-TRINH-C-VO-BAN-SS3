#include <stdio.h>
#define PI 3.14
int main() {
float radius;
float circumference, area;
// Nh?p b�n k�nh h�nh tr�n t? b�n ph�m
printf("Nh?p b�n k�nh h�nh tr�n: ");
scanf("%f", &radius);
// T�nh chu vi h�nh tr�n
circumference = 2 * PI *
// T�nh di?n t�ch h�nh tr�n
area = PI * radius * radius;
// In k?t qu? v?i 2 ch? s? th?p ph�n
printf("Chu vi h�nh tr�n: %.2f\n", circumference);
printf("Di?n t�ch h�nh tr�n: %.2f\n", area);
return 0;
}
