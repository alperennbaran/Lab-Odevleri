#include<stdio.h>
void ortkck(int dizi[])
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]<orta)
            printf("%d\t",dizi[i]);
    
  } 


void ortbyk(int dizi[])
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
            printf("%d\t",dizi[i]);}
int ortbyksayi(int dizi[])
{int sayac=0;
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
        {
        ++sayac;
        }
return sayac;
}

int ortbyktoplam(int dizi[])
 {int toplam;
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
           toplam+=dizi[i];
       
    return toplam;
  } 

int ortbykort(int dizi[])
 {int toport;
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta) {
           toport+=dizi[i];
           toport=toport/2;
   }
   return toport;
  } 
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
int enbuyuk(int dizi[]){

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

int kackez(int dizi[],int aranan){

int sayac=0;

for(int i=0;i<5;i++){
        if(dizi[i]==aranan){
       sayac++;
        }
        }
        
    


   return sayac;


}
float ort(int dolas[])
{
    int toplam=0;

    for(int i=0;i<5;i++)
    {
        toplam+=dolas[i];
    }
    
    return toplam/5;}
int main(){
    int i,dizi[5];
for( i=0;i<5;i++)
{
printf("%d.sayiyi giriniz:",i+1);
scanf("%d",&dizi[i]);
}
            printf("Ortalama: %.2f\n",ort(dizi));
            printf("Parametre olarak girdiginiz sayi %d kez tekrarlandi.\n",kackez(dizi,15));
            printf("%d sayisi en buyuk sayi\n",enbuyuk(dizi));
            printf("%d sayisi en kucuk sayi\n",enkucuk(dizi));
            printf("%d sayisi ikinci en buyuk sayi\n",ikincienbuyuk(dizi));
            ortkck(dizi);
            printf("orttan kucuk sayilardir\n");
            ortbyk(dizi);
            printf("orttan buyuk sayilardir\n");
            printf("%d orttan buyuk sayilarin toplamı\n",ortbyktoplam(dizi));
            printf("%.2f orttan buyuk sayilarin ortalamasi\n",ortbykort(dizi));
            printf("%d orttan buyuk sayi adedidir\n",ortbyksayi(dizi));

    return 0;
}