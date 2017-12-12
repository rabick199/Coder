#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,s=0;
clrscr();
for(i=1;i<=15;i++)
{
sum=sum+i;
}
for(i=15;i<=45;i++)
{
if((i%2)!=0)
s=s+i;
}
printf("Sum 1 to 15 is:%d \nSum 15 to 45 is:%d",sum,s);
getch();
}