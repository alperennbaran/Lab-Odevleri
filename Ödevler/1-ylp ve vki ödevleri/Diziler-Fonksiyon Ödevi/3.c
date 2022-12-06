#include<stdio.h>

int enkucuk(int dizi[]){

int enk;
enk=dizi[0];
for(int i=0;i<5;i++)
{
   if(dizi[i]<enk){

    enk=dizi[i];
   }
}


   return enk;


}
int main(){
    int dizi[5];
for(int i=0;i<5;i++)
{
printf("%d.sayiyi giriniz:",i+1);
scanf("%d",&dizi[i]);

}

printf("%d sayisi en kucuk sayi",enkucuk(dizi));
    return 0;
}