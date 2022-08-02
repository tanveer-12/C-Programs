#include<stdio.h>
#define rad 57.2957795
int main() 
{
	float radians, degrees;
	puts("Convert radians to degrees: ");
	printf("Enter a value in radian: ");
	scanf("%f",&radians);

	degrees = radians*rad;

	printf("%.5f radians is %.3f degrees.\n",radians,degrees);
	return 0;
}