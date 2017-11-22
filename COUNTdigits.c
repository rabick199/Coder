#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int cD,i;
clrscr();
cD=0;
printf("\nEnter the string");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]>='0'&&s[i]<='9')
cD++;
}
printf("\n Number of Digits is %d",cD);
getch();
}