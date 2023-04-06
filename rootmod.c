#include<stdio.h>
#include<math.h>

 int main()
 {
 	float value;
 	double root;

 	printf("Enter a value: ");
 	scanf("%f",&value);
 	value = fabs(value);
 	root = sqrt((double)value);
 	printf("The square root of %.3f is %.3f\n",value,root);
 	return 0;
 }