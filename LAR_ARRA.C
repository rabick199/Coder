#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,max;
clrscr();
printf("\n Enter the array values:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
max=a[i];
}
printf("\n The highest value is:%d",max);
getch();
}