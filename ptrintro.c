#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;   // storing the address of age to pointer ptr
    int age1 = *ptr;    // storing the value at address pointed by pointer ptr to age1

    printf("%d\n", age1);

    printf("%p\n",&age);   // printing the address of age variable in the memory
    printf("%u\n",&age);    //printing the address of age variable but in simple and readable form
    printf("%p\n",ptr);   //printing the address stored at pointer ptr
    printf("%p",&ptr);      //printing the  address of pointer ptr in the memory

    return 0;
}