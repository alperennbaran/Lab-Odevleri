#include<stdio.h>

int kackez(int dizi[]){

int enb;
enb=dizi[0];
for(int i=0;i<5;i++)
{
   if(dizi[i]>enb){

    enb=dizi[i];
   }
}


   return enb;


}
int main(){
    int dizi[5];
for(int i=0;i<5;i++)
{
printf("%d.sayiyi giriniz:",i+1);
scanf("%d",&dizi[i]);

}

printf("%d sayisi en buyuk sayi",kackez(dizi));
    return 0;
}