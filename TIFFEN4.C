#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int balanceidly,balancedosai,balancetea,balancevadai;
   clrscr();
   printf("\n\t enter azhagu breakfast:\n\t");
   scanf("%d%d%d%d",&aidly,&adosai,&atea,&avadai);
   printf("\n\t enter idly ate:%d\n\t",aidly);
   printf("\n\t enter dosai ate:%d\n\t",adosai);
   printf("\n\t enter tea drunk:%d\n\t",atea);
   printf("\n\t enter vadai ate:%d\n\t",avadai);
   balanceidly=idly-aidly;
   balancedosai=dosai-adosai;
   balancetea=tea-atea;
   balancevadai=vadai-avadai;
   //printf("\n\t enter balance idly:%d\n\t",balanceidly);
   //printf("\n\t enter balance dosai:%d\n\t",balancedosai);
   //printf("\n\t enter balance tea:%d\n\t",balancetea);
   //printf("\n\t enter balance vadai:%d\n\t",balancevadai);
   getch();
{
   int sidly,sdosai,stea,svadai;
   int n1balanceidly,n1balancedosai,n1balancetea,n1balancevadai;
   clrscr();
   printf("\n\t enter santhosh breakfast:\n\t");
   scanf("%d%d%d%d",&sidly,&sdosai,&stea,&svadai);
   printf("\n\t enter idly ate:%d\n\t",sidly);
   printf("\n\t enter dosai ate:%d\n\t",sdosai);
   printf("\n\t enter tea drunk:%d\n\t",stea);
   printf("\n\t enter vadai ate:%d\n\t",svadai);
   n1balanceidly=balanceidly-sidly;
   n1balancedosai=balancedosai-sdosai;
   n1balancetea=balancetea-stea;
   n1balancevadai=balancevadai-svadai;
   //printf("\n\t enter balance idly:%d\n\t",n1balanceidly);
   //printf("\n\t enter balance dosai:%d\n\t",n1balancedosai);
   //printf("\n\t enter balance tea:%d\n\t",n1balancetea);
   //printf("\n\t enter balance vadai:%d\n\t",n1balancevadai);
   getch();
{
   int midly,mdosai,mtea,mvadai;
   int n2balanceidly,n2balancedosai,n2balancetea,n2balancevadai;
   clrscr();
   printf("\n\t enter mohan breakfast:\n\t");
   scanf("%d%d%d%d",&midly,&mdosai,&mtea,&mvadai);
   printf("\n\t enter idly ate:%d\n\t",midly);
   printf("\n\t enter dosai ate:%d\n\t",mdosai);
   printf("\n\t enter tea drunk:%d\n\t",mtea);
   printf("\n\t enter vadai ate:%d\n\t",mvadai);
   n2balanceidly=n1balanceidly-midly;
   n2balancedosai=n1balancedosai-mdosai;
   n2balancetea=n1balancetea-mtea;
   n2balancevadai=n1balancevadai-mvadai;
   //printf("\n\t balance idly:%d\n\t",n2balanceidly);
   //printf("\n\t balance dosai:%d\n\t",n2balancedosai);
   //printf("\n\t balance tea:%d\n\t",n2balancetea);
   //printf("\n\t balance vadai:%d\n\t",n2balancevadai);
   getch();
}
}
}