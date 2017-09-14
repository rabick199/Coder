#include<stdio.h>
#include<conio.h>
void main()
{
  int num,temp,digit,sum=0;
  clrscr();
  printf("enter the value");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
    digit=temp%10;
    sum=sum+digit*digit*digit;
    temp=temp/10;
  }
  if(num==sum)
  {
    printf("Amstrong");
  }
  else
  {
  printf("Not Amstrong");
  }
  getch();
}
