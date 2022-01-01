#include <stdio.h>
int factorial(int x) 
{
    if(x==1 || x==0) 
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }

}

int main()
{
    int n;
    printf("Enter number to find the factorial: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}