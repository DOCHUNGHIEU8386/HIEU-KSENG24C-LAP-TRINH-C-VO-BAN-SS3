#include <stdio.h>
#define PI 3.14159

int main() {
    float r, circumference, area;

    // Y�u c?u ngu?i d�ng nh?p b�n k�nh h�nh tr�n
    printf("Nh?p b�n k�nh c?a h�nh tr�n: ");
    scanf("%f", &r);

    // T�nh chu vi h�nh tr�n
    circumference = 2 * PI * r;

    // T�nh di?n t�ch h�nh tr�n
    area = PI * r * r;

    // In k?t qu? v?i 2 s? th?p ph�n
    printf("Chu vi c?a h�nh tr�n l�: %.2f\n", circumference);
    printf("Di?n t�ch c?a h�nh tr�n l�: %.2f\n", area);

    return 0;
}

