#include<stdio.h>

int ikincienbuyuk(int dizi[]){

int enb,ikib;
enb=dizi[0];
ikib=dizi[1];
for(int i=0;i<5;i++)
{
    if(dizi[i]>enb){
        enb=dizi[i];
    }
  else if(dizi[i]>ikib && enb<dizi[i]){

    ikib=dizi[i];
   }
}


   return ikib;


}
int main(){
    int dizi[5];
for(int i=0;i<5;i++)
{
printf("%d.sayiyi giriniz:",i+1);
scanf("%d",&dizi[i]);

}

printf("%d sayisi ikinci en buyuk sayi",ikincienbuyuk(dizi));
    return 0;
}