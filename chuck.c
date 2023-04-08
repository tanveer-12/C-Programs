#include<stdio.h>
int main()
{
    char chuck;
    long int humongous;
    for(humongous=65;(char)humongous<=90;humongous++)
    {
        chuck = (char)humongous;
        putchar(chuck);  //prints the calue of the char variable chuck
    }
    putchar('\n');      //for the end of the line display
    return 0;
}