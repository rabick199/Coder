#include<stdio.h>
#include<conio.h>
void main()
{
int a,count=0,i;
clrscr();
printf("Enter value");
scanf("%d",&a);
for(i=2;i<=(a/2);i++)
{
if(a%i==0)
{
count++;
}
}
if(count==0)
printf("Prime");
else
printf("Not prime");
getch();
}