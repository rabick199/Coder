#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int cC,i;
clrscr();
cC=0;
printf("\nEnter the string");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
cC++;
}
printf("\n Number of character is %d",cC);
getch();
}