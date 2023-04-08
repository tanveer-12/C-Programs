#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the value till you want factorial of: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d:\n",n,fact(n));
    return 0;
}

int fact(int n)
{
    if(n==1 || n == 0)
    {
        return 1;
    }
    int fact_n1 = fact(n-1);
    int factorial = fact_n1 * n;
    return factorial;
}