#include<stdio.h> /*Bu ödevde ortalama notu hesaplanırken vize notunun %60'ı final notunun ise %40'ı hesaba katılmıştır.*/

float ortalama(int a,int b,float ort){
  ort=a*3/5+b*2/5;
   if(ort<=100 && ort>=80){
    printf("AA ile gectiniz.");return ort;}
  else if(ort>=70 && ort<80){
    printf("BB ile gectiniz.");return ort;
  } 
  else if(ort>=60 && ort<70){
    printf("CC ile gectiniz.");return ort;
  }
  else if(ort>=40 && ort<60){
    printf("DD ile kaldiniz.");return ort;
  }
  else if(ort<40 && ort>=0){
    printf("FF ile kaldiniz.");return ort;
  }  
  else{
  printf("Ortalama yuzden buyuk ya da sifirdan kucuk olamaz lutfen notlarinizi yeniden giriniz.");return ort;}
  return ort;
} 
int main(){
    int vize,final;
    do{
    printf("Vize notunu giriniz:");
    scanf("%d",&vize);
    printf("Final notu giriniz:");
    scanf("%d",&final);
    float ort=ortalama(vize,final,ort);
    printf("\nOrtalamaniz: %.2f\n",ort);
    }
    while(vize!=-1);
    return 0;
}