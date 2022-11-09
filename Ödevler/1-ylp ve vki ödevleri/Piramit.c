#include <stdio.h>
int main()
{
    int i,k,satir,l,m;

    printf("Satir sayisini girin: ");
    scanf("%d",&satir);

    for(i=1; i<=satir; i++)
    {
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");

    }
 
    return 0;
}