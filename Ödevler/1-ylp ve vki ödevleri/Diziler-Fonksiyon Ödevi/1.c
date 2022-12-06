#include<stdio.h>

int kackez(int dizi[],int aranan){

int sayac=0;

for(int i=0;i<5;i++){
        if(dizi[i]==aranan){
       sayac++;
        }
        }
        
    


   return sayac;


}
int main(){
    int i,dizi[5];
for( i=0;i<5;i++)
{
printf("%d.sayiyi giriniz:",i+1);
scanf("%d",&dizi[i]);
}

            printf("Parametre olarak girdiginiz sayi %d kez tekrarlandi.",kackez(dizi,15));

    return 0;
}