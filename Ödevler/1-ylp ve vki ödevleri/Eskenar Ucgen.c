#include <stdio.h>
int main()
{
    int i, bosluk, satir, k;

    printf("Satir sayisini girin: ");
    scanf("%d",&satir);

    for(i=1; i<=satir; i++, k=0)
    {
        for(bosluk=1; bosluk<=satir-i; bosluk++)
        {
            printf("  ");
        }

        do{
            printf("* ");
            k++;
        } while(k != 2*i-1);

        printf("\n");
    }
    
    return 0;
}