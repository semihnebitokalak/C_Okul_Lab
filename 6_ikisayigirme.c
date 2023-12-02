// write C code to add two numbers entered by user.

#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi1,sayi2,toplam;
printf("Lütfen birinci sayiyi giriniz :");
scanf("%d",&sayi1);
printf("\n");
printf("Lütfen ikinci sayiyi giriniz :");
scanf("%d",&sayi2);
toplam = sayi1 + sayi2;
printf("%d\n",toplam);

    return 0;
}