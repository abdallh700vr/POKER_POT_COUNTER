#include <stdio.h>
#include <stdlib.h>
void bilgi_goruntule(int *apo,int *sefa,int *selim,int *turan,int *selcuk)
{
    printf("********************************************************\n");
printf("bilgiler:\n");
printf("\t apo:%d \t sefa:%d \t selim:%d \t turan:%d \t selcuk:%d\n",*apo,*sefa,*selim,*turan,*selcuk);
printf("********************************************************\n");

}
void bilgi_al(int *apo,int *sefa,int *selim,int *turan,int *selcuk)
{
    int apo1,sefa1,selim1,turan1,selcuk1;
printf("********************************************************\n");
printf("apo;");
scanf("%d",&apo1);
printf("sefa;");
scanf("%d",&sefa1);
printf("selim;");
scanf("%d",&selim1);
printf("turan;");
scanf("%d",&turan1);
printf("selcuk;");
scanf("%d",&selcuk1);
printf("********************************************************\n");
*apo+=apo1;
*sefa+=sefa1;
*selim+=selim1;
*turan+=turan1;
*selcuk+=selcuk1;
bilgi_goruntule(apo,sefa,selim,turan,selcuk);
}
int main()
{
    int a,b,c,d,h;
    int (*menu[2])(int *apo,int *sefa,int *selim,int *turan,int *selcuk)={bilgi_goruntule,bilgi_al};
     char verfiy='y';

     while(verfiy=='y')
     {
         int q;
         printf("********************************************************\n");
         printf("please enter the pot:\n");
         printf("1.for bilgi_goruntule \n");
         printf("2.for bilgi_al \n");
         scanf("%d",&q);
         printf("********************************************************\n");

         menu[q-1](&a,&b,&c,&d,&h);
         printf("********************************************************\n");
         printf("do you want to keep on:(y/n)");
         scanf(" %c",&verfiy);
         printf("********************************************************\n");

     }
    return 0;
}
