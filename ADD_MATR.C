#include<stdio.h>
#include<conio.h>
void main()
{
int m1[100][100],m2[100][100],res[100][100],i,j,r,c;
clrscr();
printf("Enter the rows and columns:");
scanf("%d%d",&r,&c);
printf("\n Enter the matrix1:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("\n Enter the matrix2:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&m2[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
res[i][j]=m1[i][j]+m2[i][j];
}
}
printf("\n The resultant matrix is:");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
printf("\t%d",res[i][j]);
}
}
getch();
}