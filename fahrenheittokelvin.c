#include<stdio.h>
#include<stdlib.h>

double cevirici(double fahrenheit)

int main(){
    double fahrenheit,kelvin;
    printf("Kelvin e çevirmek istediğiniz Fahrenheit değerini giriniz:");
    scanf("%lf",&fahrenheit);
    kelvin =cevirici(fahrenheit);
    printf("%.2lf Fahrenheit, %.2lf Kelvin eder.\n",fahrenheit,kelvin);
    return 0;
}

double cevirici(double fahrenheit){
    return (fahrenheit+459.67)*5/9;
}
