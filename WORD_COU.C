#include<stdio.h>
#include<conio.h>
void main()
{
char c[200];
int i,w=1;
clrscr();
printf("Enter the string:");
scanf("%s",&c);
for(i=0;i!='\0';i++)
{
if(c[i]==' ')
w++;
}
printf("\n The number of words is:%d",w);
getch();
}
