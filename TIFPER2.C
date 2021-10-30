#include<stdio.h>
#include<conio.h>
void main()
{
  int puri;
  int rpuri,kpuri,mpuri;
  int repuri,kepuri,mepuri;
  int b1puri,b2puri,b3puri;
  clrscr();
  printf("total no of puri:");
  scanf("%d",&puri);
  printf("no of puri rahul eat:");
  scanf("%d",&rpuri);
  repuri=puri*rpuri/100;
  b1puri=puri-repuri;
  //printf("balance puri:%d",b1puri);
  getch();
  printf("\n\t no of puri karthi eat:");
  scanf("%d",&kpuri);
  kepuri=puri*kpuri/100;
  b2puri=b1puri-kepuri;
  printf("\n\t balance puri:%d",b2puri);
  getch();
  printf("\n\t no of puri mohan eat:");
  scanf("%d",&mpuri);
  mepuri=puri*mpuri/100;
  b3puri=b2puri-mepuri;
  printf("\n\t balance puri:%d",b3puri);
  getch();
}
