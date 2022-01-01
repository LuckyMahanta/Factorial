#include <stdio.h>
int main()
{
    int i=1, n, fact=1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The factorial %d is %d\n", n, fact);   

    return 0;
}