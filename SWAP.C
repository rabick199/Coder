#include<stdio.h>
#include<conio.h>
void main()
{
int v1,v2,t;
clrscr();
printf("Enter the v1 and v2 values:");
scanf("%d%d",&v1,&v2);
printf("\n Before swapping %d %d",v1,v2);
t=v1;
v1=v2;
v2=t;
printf("\n After swapping %d %d",v1,v2);
getch();
}