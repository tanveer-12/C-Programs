//exercise 3.1.2 - array into temp
#include<stdio.h>
#define COUNT 5
int main()
{
	float temps[COUNT];
	float total,average;
	int c;

	for(c=0;c<COUNT;c++)
	{
		printf("Input the temperature for day %d: ",c+1);
		scanf("%f",&temps[c]);
	}

	total = 0.0;
	printf("Temperatures for the page %d days:\n",COUNT);
	for(c=0;c<COUNT;c++)
	{
		printf("Day %d, %5.1f\n",c+1,temps[c]);
		total += temps[c];
	}

	average = total /(float)COUNT;
	printf("The average temperature was %5.1f\n",average);
	return 0;
}