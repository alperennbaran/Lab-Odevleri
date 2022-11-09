#include<stdio.h>

int main()
{
    char tur;
    int ucret,gun,yol;

    printf("Arabanin turunu giriniz: ");
    tur=getchar();
    printf("\nKac km yol aldiniz: ");
    scanf("%d",&yol);
    printf("\nArabayi kac gun kullandiniz: ");
    scanf("%d",&gun);

    switch(tur)
    {
    case 'a':
    case 'A': ucret=yol*18+gun*20;  break;
    case 'b':
    case 'B': ucret=yol*22+gun*32;  break;
    case 'c':
    case 'C': ucret=yol*28+gun*43;  break;
    case 'p':
    case 'P': ucret=yol*36+gun*51;  break;

default: break;
    }
    printf("Toplam ucret=%d",ucret);
    return 0;
}