#include<stdio.h>
#include<conio.h>
char*strcat(char*a,const char*b);
void main()
{
   char a[20]="wel";
   char b[20]="come";
   clrscr();
   puts(a);
   puts(b);
   strcat(a,b);
   printf("after conatenation %s",a);
   getch();
}
char*strcat(char*a,const char*b)
{
  int i=0,j=0;
  while(a[i]!='\0')
  i++;
  while(b[j]!='\0');
  {
    a[i]=b[j];
    i++;j++;
  }
  a[i]='\0';
  return a;
}
