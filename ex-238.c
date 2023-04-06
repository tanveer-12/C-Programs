#include<stdio.h>
#include<math.h>

int main()
{
	int value;
	double root;

	printf("Enter a value: ");
	scanf("%d",&value);
	if(value<0)
	{
		printf("I can't compute the root of a negative number.");
	}
	else
	{
		root = sqrt((double)abs(value));
		printf("The square root of %d is %.2f\n",value,root);
	}
	return 0;
}