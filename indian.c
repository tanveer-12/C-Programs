#include<stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    char c;
    printf("Enter i/I for indian and f/F for french: ");
    scanf("%c",&c);
    if(c == 'i' || c=='I')
    {
        printNamaste();
    }
    if(c == 'f' || c=='F')
    {
        printBonjour();
    }
    else
    printf("Either click i or f");
    return 0;
}

void printNamaste()
{
    printf("NAMASTE!");
}

void printBonjour()
{
    printf("BONJOUR!");
}