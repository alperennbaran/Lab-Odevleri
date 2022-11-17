#include<stdio.h>

int main()      /*Hocam ben bu kodu 11.11.2022 tarihinde githuba yüklemiştim silinmiş 17.11.2022 tarihinde tekrar yüklüyorum.*/ 
{/*Ara�lar-->Renault=1,Mazda=2,Honda=3,Ford=4*/
    int marka,reno,mazda,honda,ford,k=0,l=0,m=0,n=0,t1=0,t2=0,t3=0,t4=0;
		while (marka!=111){
	printf("Marka giriniz: ");
    scanf("%d",&marka);    
        
        switch(marka){
        case 1:
         printf("Tutar giriniz: "); scanf("%d",&reno);k++;t1+=reno;
          break;
        case 2:
         printf("Tutar giriniz: "); scanf("%d",&mazda);l++;t2+=mazda;
          break;
        case 3:
         printf("Tutar giriniz: "); scanf("%d",&honda);m++;t3+=honda;
          break;
        case 4:
         printf("Tutar giriniz: "); scanf("%d",&ford);n++;t4+=ford;
          break;
        default: printf("Hatali giris yaptiniz.\n"); 
    
}           }
printf("Program Sona Erdi\n*******OZET BILGILER*******\n") ;
if(t1>t2 && t1>t3 && t1>t4)
{printf("En cok satis yapilan marka: Renault (%d TL)\n",t1);}
if(k>l && k>m && k>n)
{printf("En cok gelen arac markasi: Renault (%d kez)\n",k);}
if(t2>t1 && t2>t3 && t2>t4)
{printf("En cok satis yapilan marka: Mazda (%d TL)\n",t2);}
if(l>m && l>n && l>k)
{printf("En cok gelen arac markasi: Mazda (%d kez)\n",l);}
if(t3>t1 && t3>t2 && t3>t4)
{printf("En cok satis yapilan marka: Honda (%d TL)\n",t3);}
if(m>k && m>l && m>n)
{printf("En cok gelen arac markasi: Honda (%d kez)\n",m);}
if(t4>t1 && t4>t2 && t4>t3)
{printf("En cok satis yapilan marka: Ford (%d TL)\n",t4);}
if(n>k && n>l && n>m)
{printf("En cok gelen arac markasi: Ford (%d kez)\n",n);}
    return 0;
}