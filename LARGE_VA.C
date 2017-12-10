#include<stdio.h>
#include<conio.h>
void main()
{
int v1,v2,v3;
clrscr();
printf("Enter the three values:");
scanf("%d%d%d",&v1,&v2,&v3);
if((v1>v2)&&(v1>v3))
printf("\n %d is large value",v1);
else if(v2>v3)
printf("\n %d is large value",v2);
else
printf("\n %d is large value",v3);
getch();
}