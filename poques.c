#include<stdio.h>
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;   //store value 0 to address stored in pointer ptr that is x i.e. x=0

    printf("x is %d:\n",x);   //0
    printf("*ptr is %d: \n",*ptr);  //0

    *ptr+=5;   //*ptr = x so *ptr = *ptr + 5 --> x = x + 5 --> x = 0 + 5 --> x = 5
    printf("x is %d:\n",x);   //5
    printf("*ptr is %d: \n",*ptr);    //5

    (*ptr)++;    //similarly x = x + 1 --> x = 5 + 1 --> x = 6
    printf("x is %d:\n",x);  //6
    printf("*ptr is %d: \n",*ptr);  //6

    return 0;

}
