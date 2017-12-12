#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[100];
int alnum,alph,d,n,i,c;
clrscr();
alph=alnum=d=c=0;
printf("Enter the string:");
gets(ch);
n=strlen(ch);
printf("\n String length is:%d",n);
for(i=0;i<n;i++)
{
if(isdigit(ch[i]))
d++;
else if(isalnum(ch[i]))
alnum++;
else if(isalpha(ch[i]))
alph++;
else
c++;
}
printf("\n Alphabet=%d \n Alphanumeric=%d \n Digits=%d",alph,alnum,d);
getch();
}
