#include<stdio.h>
#include<conio.h>
void main()
{
  int f=0,s=1,n,last,i;
  clrscr();
  printf("Enter the limit:");
  scanf("%d",&last);
  printf("%d\n%d\n",f,s);
  for(i=2;i<last;i++)
  {
    n=f+s;
    f=s;
    s=n;
    printf("%d\n",n);
  }
  getch();
}