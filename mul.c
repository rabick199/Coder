#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("Multiplication table is %d\t", n, i, n*i);
    }
    
    return 0;
}
