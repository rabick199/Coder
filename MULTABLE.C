#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the n:");
scanf("%d",&n);
printf("\n The multiplication table for %d",n);
for(i=1;i<=10;i++)
printf("\n %d*%d=%d",n,i,n*i);
getch();
}
