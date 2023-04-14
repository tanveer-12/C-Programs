#include<stdio.h>

void swap(int a, int b);    //call by value
void _swap(int *a, int *b);   //call by reference

int main() {
    int x = 3, y = 5;
    
    swap(x,y);
    printf("x = %d and y = %d\n",x,y);

    _swap(&x,&y);
    printf("x = %d and y = %d\n",x,y);
    return 0;
}


void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d and b = %d\n",a,b);
}

void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d and b = %d\n",*a,*b);
}