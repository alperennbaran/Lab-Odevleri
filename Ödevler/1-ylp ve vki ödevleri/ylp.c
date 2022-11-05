#include <stdio.h>

int main() {

/* Değerleri int tanımlayınca oluyor ama float yazınca her zaman "Kazanamadınız yazısı çıkıyor ve ondalıklı sayılar girilmiyor."*/
float ales,yds,ort,ylp;

printf("Ales Puanini Giriniz: ");
scanf("%f",&ales);
printf("YDS Puanini Giriniz: ");
scanf("%f",&yds);
printf("Mezuniyet Ortalamasini Giriniz: ");
scanf("%f",&ort);

ylp=ales*1/2+yds*1/4+ort*1/4;

if(ylp>=60 && yds>70)

{
    
    printf("Lisansustu egitime hak kazandiniz.");

    }

else

{
    
    printf("Lisanustu egitime hak kazanamadiniz.");


}

return 0;

}  