#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count;
int s,e;
clrscr();
printf("Enter the starting and ending point:");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if((i%j)==0)
count++;
}
if(count==2)
printf("\t%d",i);
}
getch();
}