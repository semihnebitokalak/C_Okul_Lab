#include<stdio.h>
#include<stdlib.h>

int main(){

int sicaklik;
float Celcius;

printf("Fahrenheit cinsinden sicaklik değeri giriniz :");
scanf("%d",&sicaklik);

Celcius = (sicaklik - 32) / 1.8;

printf("%.2f",Celcius);

    return 0;
}
