#include<stdio.h>
#include<stdlib.h>

int main(){

int a,b;

printf("Lütfen a değerini giriniz");
scanf("%d",&a);
printf("Lütfen b değerini giriniz");
scanf("%d",&b);

a = a+b;
b = a-b;
a = a-b;

printf("Yeni a değeriniz = %d\n",a);
printf("Yeni b değeriniz = %d\n",b);


    return 0;
}



/*

Bu kodu 3 değişken oluşturarak yazabiliriz.
int a,b,c;

a yı girdik
b yi girdik

a yı c değişkeninde sabit tutarız.
Sonra
a=b;
Yaptığımız zaman b nin değeri a ya aktarılmış olur.
Sırada b yi a ya eşitlemek kaldı.
a değerini önceden tutan bi c değişkenimiz tutuyordu.
O yüzden,
a=c; 
Yaptığımız zaman b nin değeri a ya aktarılmış olur.
*/

/*

int main(){

int a,b,c;

a=23;
b=42;
printf("%d\n",a);
printf("%d\n",b);

c = a;
a=b;
b=c;

printf("%d\n",a);
printf("%d\n",b);

    return 0;
}

*/