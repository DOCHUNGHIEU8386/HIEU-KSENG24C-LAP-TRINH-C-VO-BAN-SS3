#include <stdio.h>

int main() {
    float base, height, area;

    // Y�u c?u ngu?i d�ng nh?p d? d�i c?nh d�y c?a tam gi�c
    printf("Nh?p d? d�i c?nh d�y c?a tam gi�c: ");
    scanf("%f", &base);

    // Y�u c?u ngu?i d�ng nh?p chi?u cao c?a tam gi�c
    printf("Nh?p chi?u cao c?a tam gi�c: ");
    scanf("%f", &height);

    // T�nh di?n t�ch tam gi�c
    area = (base * height) / 2;

    // Hi?n th? k?t qu?
    printf("Di?n t�ch c?a tam gi�c l�: %.2f\n", area);

    return 0;
}


