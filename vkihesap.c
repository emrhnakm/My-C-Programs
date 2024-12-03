#include <stdio.h>
#include <stdlib.h>
double vkihesap(double kilo,double boy)

int main(){
    double vki,kilo,boy;
    printf("Kilonuzu giriniz(kg):");
    scanf("%lf",&kilo);
    printf("Boyunuzu giriniz(metre):");
    scanf("%lf",&boy);
    if(boy<=0 || kilo<=0) {
        printf("Geçersiz bir değer girdiniz!\n");
        return 1;
    }
    
    vki= vkihesap(kilo,boy);
    if(vki<=18.5) printf("VKİ değeriniz %.2lf Durumunuz Zayıf\n",vki);
    else if(vki>18.5 && vki<=24.9) printf("VKİ değeriniz %.2lf Durumunuz Normal\n",vki);
    else if(vki>25 && vki<=29.9) printf("VKİ değeriniz %.2lf Durumunuz Fazla Kilolu\n",vki);
    else if(vki>30) printf("VKİ değeriniz %.2lf Durumunuz Obez\n",vki);
    return 0;
    }
double vkihesap(double kilo,double boy){
    return kilo/(boy*boy); 
}
