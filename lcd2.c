#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int c;
clrscr();
printf("Enter A and B:");
scanf("%d%d",&a,&b);
c=(a>b)?a:b;
while(1)
{
if((c%a==0)&&(c%b==0))
{
  printf("The LCM of %d and %d is %d",a,b,c);
}
++c;
}
getch();
}