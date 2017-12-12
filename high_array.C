#include<stdio.h>
#include<conio.h>
void main()
{
int ar[10],i,max;
clrscr();
printf("\n Enter the array values:");
for(i=0;i<10;i++)
scanf("%d",&ar[i]);
max=ar[0];
for(i=0;i<10;i++)
{
if(ar[i]>max)
max=ar[i];
}
printf("\n The highest value is:%d",max);
getch();
}