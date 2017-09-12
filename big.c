#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<c&&b<c)
{
printf("C is big");
}
else if(b<a)
{
printf("A is big");
}
else
{
printf("B is big");
}
}
