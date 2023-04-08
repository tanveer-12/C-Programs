#include<stdio.h>

float fahren(float temp);

int main()
{
    float temp;
    printf("Enter the celsius temp: ");
    scanf("%f",&temp);
    fahren(temp);
    return 0;
}

float fahren(float temp)
{
    float fahrenheit= temp*(9/5) + 32;
    printf("Fahrenhiet temp is: %f ",fahrenheit);
}