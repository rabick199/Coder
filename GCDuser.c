#include<stdio.h>
#include<conio.h>
int gcd(int p,int q)
{
if(p==0||q==0)
return 0;
if(p==q)
return p;
if(p>q)
{
return gcd(p-q,q);
}
return gcd(p,q-p);
}
void main()
{
int a,b;
clrscr();
printf("Enter a and b:");
scanf("%d%",&a,&b);
printf("\nGCD of %d and %d is %d",a,b,gcd(a,b));
getch();
}