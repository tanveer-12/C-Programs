//modifictaion 0f rand1001 pro
// refilling an array

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define COUNT 100

int main()
{
	int r[COUNT];
	int c;

	srand((unsigned)time(NULL));

	//initializing the array
	for(c=0;c<COUNT;c++)
		r[c] = rand() % 100 + 1;

	//displaying the array
	puts("100 Random numbers: ");
	for(c=0;c<COUNT;c++)
		printf("%d\t",r[c]);
	putchar('\n');

	//re-initialize the array
	for(c=0;c<COUNT;c++)
		r[c] = rand() % 100 + 1;
	
	//displaying the array again
	puts("100 NEW random numbers: ");
	for(c=0;c<COUNT;c++)
		printf("%d\t",r[c]);
	putchar('\n');
	return 0;
}