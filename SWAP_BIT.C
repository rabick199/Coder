#include<stdio.h>
#include<conio.h>
void main()
{
int l=17,k=12;
clrscr();
printf("Before swapping l=%d  k=%d",l,k);
l=l^k;
k=l^k;
l=l^k;
printf("\n After swapping l=%d k=%d",l,k);
getch();
}