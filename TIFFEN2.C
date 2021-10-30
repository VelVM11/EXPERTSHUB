#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int balanceidly,balancedosai,balancetea,balancevadai;
   clrscr();
   scanf("%d%d%d%d",&aidly,&adosai,&atea,&avadai);
   printf("\n\t enter azhagu breakfast:\n\t");
   balanceidly=idly-aidly;
   balancedosai=dosai-adosai;
   balancetea=tea-atea;
   balancevadai=vadai-avadai;
   printf("\n\t enter balance idly:%d\n\t",balanceidly);
   getch();
   printf("\n\t enter balance dosai:%d\n\t",balancedosai);
   getch();
   printf("\n\t enter balance tea:%d\n\t",balancetea);
   getch();
   printf("\n\t enter balance vadai:%d\n\t",balancevadai);
   getch();
}