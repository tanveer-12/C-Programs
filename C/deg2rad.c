#include<stdio.h>
#define DEG 0.0174532925

int main()
{
	float radians, degrees;
	printf("Convert degrees into radians.\n");
	printf("Enter the value of degrees: ");
	scanf("%f",&degrees);

	radians = degrees*DEG;

	printf("%.5f degrees is %.3f radians.\n",degrees,radians);
	return 0;
}

/*
OR
#define rad 57.2957795
int main() 
{
	float radians, degrees;
	puts("Convert degrees to radians: ");
	printf("Enter a value in degree: ");
	scanf("%f",&degrees);

	radians = degrees/rad;

	printf("%.3f degrees is %.5f radians.\n",degrees,radians);
	return 0;
}