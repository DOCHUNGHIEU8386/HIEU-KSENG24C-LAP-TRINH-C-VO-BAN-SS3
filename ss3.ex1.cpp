#include <stdio.h>

int main() {
    char name[50]; // Khai báo m?ng ký t? d? luu tr? tên ngu?i dùng

    // Yêu c?u ngu?i dùng nh?p tên
    printf("Nh?p tên c?a b?n: ");
    scanf("%49s", name); // Luu ý: %49s d? d?m b?o không vu?t quá kích thu?c m?ng

    // In ra câu chào
    printf("Xin chào %s!\n", name);

    return 0;
}
