#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
r=fact(n);
printf("The factorial for the given number is:%d",r);
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n)*fact(n-1);
}

