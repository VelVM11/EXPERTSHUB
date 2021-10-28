#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,output1,output2,output3,output4,output5;
   clrscr();
   printf("enter the value of no1 and no2 :");
   scanf("%d%d",&no1,&no2);
   //printf("enter the value of no2 :",no2);
   //scanf("%d",&no2);
   output1=no1+no2;
   printf("\n\tvalue of output1 : %d\n\t",output1);
   output2=no1-no2;
   printf("value of output2 : %d\n\t",output2);
   output3=no1*no2;
   printf("value of output3 : %d\n\t",output3);
   output4=no1%no2;
   printf("value of output4 : %d\n\t",output4);
   output5=no1/no2;                                              l
   printf("value of output5 : %d\n\t",output5);
   getch();
}