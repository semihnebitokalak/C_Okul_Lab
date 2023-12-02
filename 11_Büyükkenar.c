#include<stdio.h>
#include<stdlib.h>

int main(){

int A, B, C;

printf("Lütfen A kenarini giriniz :");
scanf("%d",&A);
printf("Lütfen B kenarini giriniz :");
scanf("%d",&B);
printf("Lütfen C kenarini giriniz :");
scanf("%d",&C);

if ( A > B && A > C )
{
    printf("En büyük kenar = %d\n", A);
}

else if (C > A && C > B)
{
    printf("En büyük kenar = %d\n", C);
}
else
{
    printf("En büyük kenar = %d\n", B);
}


    return 0;
}