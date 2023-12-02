#include<stdio.h>
#include<stdlib.h>

int main(){

int vize,final,ort; //vize notunun %40 ı ve final notunun %60 ını alınız.

printf("Lütfen vize notunu giriniz = ");
scanf("%d",&vize);
printf("Lütfen final notunu giriniz = ");
scanf("%d",&final);

ort = (vize*40/100) + (final*60/100);

printf("Sinav ortalamaiz = %d",ort);

    return 0;
}