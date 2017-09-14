#include<stdio.h>
#include<conio.h>
void main()
{
  int num,temp,digit,rev=0;
  clrscr();
  printf("enter the value");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
    digit=temp%10;
    rev=(rev*10)+digit;
    temp=temp/10;
  }
  if(num==rev)
  {
    printf("Palindrome");
  }
  else
  {
  printf("Not Palindrome");
  }
  getch();
}
