#include<stdio.h>

int fabonacci(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",fabonacci(n));
    return 0;
}

int fabonacci(int n)
{
    if(n==0 || n ==1)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
    }
    int fabNm1 = fabonacci(n-1);
    int fabNm2 = fabonacci(n-2);
    int fabN = fabNm1 + fabNm2;
    //printf("fabonacci series of %d is %d: ",n, fabN);
    return fabN;
}