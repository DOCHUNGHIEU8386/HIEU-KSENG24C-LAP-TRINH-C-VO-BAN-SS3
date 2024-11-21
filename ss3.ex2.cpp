#include <stdio.h>
int main(){
float celsius, fahrenheit;
// Yeu cau nguoi dung nhap vao nhiet do theo do Celsius
printf("Nhap nhiet do theo do Celsius");
scanf("%f", &celsius);
// Chuyen doi nhiet do tu do Celsius sang do Faherenheit
fahrenheit = (celsius * 9 / 5)+ 32;
// Hien thi ket qua 
printf("Nhiet do theo do Fahrenheit là: %.2f\n", fahrenheit);
return 0;
}
