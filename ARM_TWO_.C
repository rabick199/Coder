#include<stdio.h>
#include<conio.h>
void main()
{
int s,e,i;
int t;
clrscr();
printf("Enter the starting and ending point:");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
int sum=0;
t=i;
while(t)
{
int x=t%10;
sum=sum+(x*x*x);
t=t/10;
}
if(sum==i)
printf("\t%d",i);
}
getch();
}
