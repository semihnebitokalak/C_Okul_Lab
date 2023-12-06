#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int sayac, fac = 1;
int sayi;

printf("Faktöriyel almak istediğiniz sayiyi giriniz ");
scanf("%d",&sayi);

for (sayac = 1 ; sayac <= sayi; sayac++)
{
    fac = fac * sayac;
}

    printf("Girdiğiniz sayinin faktöriyeli = %d",fac);

    return 0;
}