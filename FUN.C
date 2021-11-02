#include<stdio.h>
int diwali();
int laddu,ras,temp;

void main()
{
clrscr();
	printf("enter laddu:");
	scanf("%d",&laddu);
	printf("enter ras:");
	scanf("%d",&ras);
	diwali(laddu,ras);
	printf("total sweet:%d",temp);
getch();
}
int diwali(int a, int b)

{
  if(ras==0)
  {
  return 0;
  }
  else
  {
  //printf("total sweet:%d",a+b);
  return a+b;
  }
}
