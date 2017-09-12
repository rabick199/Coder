#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
if((c<='z'&&c>='a')||(c<='Z'&&c>='A'))
{
printf("Alphabet");
}
else
{
printf("Not alphabet");
}
}
