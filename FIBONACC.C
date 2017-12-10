#include<stdio.h>
#include<conio.h>
void main()
{
int a1=0,a2=1,l,n,i;
clrscr();
printf("Enter the limit:");
scanf("%d",&l);
printf("\t%d\t%d",a1,a2);
for(i=2;i<l;i++)
{
n=a1+a2;
a1=a2;
a2=n;
printf("\t %d",n);
}
getch();
}