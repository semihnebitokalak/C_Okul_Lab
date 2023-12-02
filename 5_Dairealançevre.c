#include<stdio.h>
#include<stdlib.h>

int main(){

int alan,çevre,islem,r; // 1 tuşuna basıldığında çevre 2 tuşuna basıldığında alanı veren kodu yazınız.
float π;
π = 3.14;

printf("Lütfen dairenin yaricapini giriniz .");
scanf("%d",&r);

printf("Lütfen yapmak istediğiniz işlemi seçiniz [1,2].");
scanf("%d",&islem);

if (islem == 1)
{
    çevre = 2*π*r;
    printf("Dairenin çevresi = %d\n",çevre);
}
else if (islem == 2)
{
    alan = π*r*r;
    printf("Dairenin alani = %d",alan);
}

else
{
    printf("Yanliş işlem tuşladiniz");
}



    return 0;
}