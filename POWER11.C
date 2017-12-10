#include<stdio.h>
#include<conio.h>
void main()
{
int e,b,v=1;
clrscr();
printf("Enter the base and exponent values:");
scanf("%d%d",&b,&e);
while(e!=0)
{
v=v*b;
--e;
}
printf("Power of %d is %d",b,v);
getch();
}
