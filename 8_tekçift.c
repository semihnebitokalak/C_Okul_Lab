#include<stdio.h>

int main(){

int sayi;

printf("Lütfen bir sayi giriniz :");
scanf("%d",&sayi);

if (sayi % 2 == 0)
{
    printf("Girdiğiniz sayi çifttir");
}
else
{
    printf("Girdiğiniz sayi tektir.");
}



    return 0;
}