#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,sum=0;
float avg;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
printf("\n Enter the array values:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\n The average value in an array is:%f",avg);
getch();
}

