#include <stdio.h>

int main() {
    char name[50]; // Khai b�o m?ng k� t? d? luu tr? t�n ngu?i d�ng

    // Y�u c?u ngu?i d�ng nh?p t�n
    printf("Nh?p t�n c?a b?n: ");
    scanf("%49s", name); // Luu �: %49s d? d?m b?o kh�ng vu?t qu� k�ch thu?c m?ng

    // In ra c�u ch�o
    printf("Xin ch�o %s!\n", name);

    return 0;
}
