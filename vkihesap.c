#include <stdio.h>
#include <stdlib.h>
double vkihesap(double kilo,double boy){
    return kilo/(boy*boy);
}
int main(){
    double vki,kilo,boy;
    printf("Kilonuzu giriniz(kg):");
    scanf("%lf",&kilo);
    printf("Boyunuzu giriniz(metre):");
    scanf("%lf",&boy);
    vki= vkihesap(kilo,boy);
    if(vki<=18.5) printf("VKİ değeriniz %.2lf Durumunuz Zayıf",vki);
    else if(vki>18.5 & vki<=24.9) printf("VKİ değeriniz %.2lf Durumunuz Normal",vki);
    else if(vki>25 & vki<=29.9) printf("VKİ değeriniz %.2lf Durumunuz Fazla Kilolu",vki);
    else if(vki>30) printf("VKİ değeriniz %.2lf Durumunuz Obez",vki);
    else printf("Hata!!!");
    return 0;
    }