#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter the value till you wnat your sum to be: \n");
    scanf("%d",&n);
    printf("Sum till %d natural numbers is: %d ",n,sum(n));
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sum_n1 = sum(n-1);
    int sumton = sum_n1 + n;
    return sumton;
}