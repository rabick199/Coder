#include<stdio.h>
#include<conio.h>
void main()
{
char c[200];
int i,w=1,l;
clrscr();
printf("Enter the string:");
gets(c);
l=strlen(c);
printf("\n%d",l);
for(i=0;i!=l;i++)
{
if(c[i]==' ')
w++;
}
printf("\n The number of words is:%d",w);
getch();
}
