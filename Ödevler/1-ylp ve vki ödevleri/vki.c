#include <stdio.h>

int main()

{

float boy,kilo,vki;


/*Not:Boyu cm kütleyi de kg cinsinden giriniz*/

printf("Kilonuz: ");
scanf("%f",&kilo);
printf("Boyunuz: ");
scanf("%f",&boy);
vki=kilo/(boy*boy);

if(vki<=18.5)


{
    printf("Zayifsiniz.");
    


}

else if(vki>18.5 && vki<=25)

{
    printf("Normal kilodasiniz.");

}

else if(vki>25 && vki<30)

{
    printf("Kilolusunuz.");
}

else if(vki>30)

{
    printf("Obezsiniz.");
}

return 0;

}
	