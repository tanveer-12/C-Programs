#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int value;
	double root;

	printf("Enter a value: ");
	scanf("%d",&value);
	value=abs(value);
	root = sqrt((double)value);
	printf("The square root of %d is %f.\n",value,root);
	return 0;
}

//the lines 12 and 13 can be combined as
// root = sqrt((double)abs(value));
/* firstly the result of abs(value) is calculated
 and then that value is typecast as double. finally 
 the sqrt() function operates on that value, sending
 the result into the root variable.