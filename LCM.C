#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int mM;
clrscr();
printf("Enter A and B:");
scanf("%d%d",&a,&b);
mM=(a>b)?a:b;
while(1)
{
if((mM%a==0)&&(mM%b==0))
{
  printf("The LCM of %d and %d is %d",a,b,mM);
  break;
}
++mM;
}
getch();
}