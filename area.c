#include<stdio.h>

float square(float s);
float circle(float rad);
float rectangle(float l,float b);

int main()
{
    float s = 2.0, rad = 2.0, l = 2.0, b = 2.0;
    square(s);
    circle(rad);
    rectangle(l,b);

    return 0;
}

float square(float s)
{
     float area = s*s;
    printf("Area of square is %f:\n",area);
}

float circle(float rad)
{
    float area =  3.14* rad* rad;
    printf("Area of circle is %f:\n",area);
    
}

float rectangle(float l,float b)
{
    float area =  l * b;
    printf("Area of rectangle is %f:\n",area);
}