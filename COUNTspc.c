#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int cD,cC,cSP,cS,i;
clrscr();
cD=cC=cSP=cS=0;
printf("\nEnter the string");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]>='0'&&s[i]<='9')
cD++;
else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
cC++;
else if(s[i]==' ')
cS++;
else
cSP++;
}
printf("\n Number of Special character is %d",cSP);
getch();
}