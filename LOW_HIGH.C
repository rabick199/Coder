#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i;
int n,max,min;
clrscr();
printf("Enter the n:");
scanf("%d",&n);
printf("\n Enter the array values:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
else
min=a[i];
}
printf("\n The lowest value is:%d",min);
printf("\n The highest value is:%d",max);
getch();
}

