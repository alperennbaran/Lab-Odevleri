#include<stdio.h>/*Ortalama hesaplanırken vizenin %60'ı finalin %40'ı alınmıştır.*/

void arraypoint(){
float vize[5],final[5]; float ort[5];
for(int i=0;i<5;i++){

printf("%d.ogrencinin vize notunu giriniz: ",i+1);
scanf("%f",&vize[i]);}
for(int k=0;k<5;k++){

printf("%d.Ogrencinin final notunu giriniz: ",k+1);
scanf("%f",&final[k]);}

printf("Ogrencilerin Vize Notlari\n");
for(int i=0;i<5;i++){
    printf("%d.Ogrencinin vize notu:%.2f\n",i+1,vize[i]);
}
printf("Ogrencilerin Final Notlari\n");
for(int k=0;k<5;k++){
    printf("%d.Ogrencinin vize notu:%.2f\n",k+1,final[k]);
}
printf("Ogrencilerin Ortalamalari\n");

for(int j=0;j<5;j++){

    ort[j]=3*vize[j]/5+2*final[j]/5;
    printf("%d.Ogrencinin ortalamasi:%.2f\n",j+1,ort[j]);
}

}
int main(){




arraypoint();


    return 0;
}