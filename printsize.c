#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Size of short is %d bytes: \n",sizeof(short));
    printf("Size of long is %d bytes: \n",sizeof(long));
    printf("Size of int is %d bytes: \n",sizeof(int));
    printf("Size of char is %d bytes: \n",sizeof(char));
    printf("Size of float is %d bytes: \n",sizeof(float));
    printf("Size of double is %d bytes: \n",sizeof(double));
    printf("Size of long double is %d bytes: ",sizeof(long double));
    return 0;    
}