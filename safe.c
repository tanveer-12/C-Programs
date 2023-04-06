//array to store a series of digits

/*
#include<stdio.h>
int main()
{
	int combination[] = {36, 24, 12};
	printf("the combination for the safe:\n");
	printf("Turn left to %d\n" , combination[0]);
	printf("Turn right to %d\n" , combination[1]);
	printf("Turn left to %d, open.\n" , combination[2]);
	return 0;
} */

//another array intro
/*
#include<stdio.h>
int main()
{
	char grades[] = {'A','A','B','C','A','B','C','C','B','A','D','D','B','B','A','A','A','B','A','B','A','F','B','B','B'};
	int student;
	puts("Class Grades");
	for(student=0;student<25;student++)
	{
		printf("student #%d, %c\n" , student+1,grades[student]);
	}
	return 0;
} */

//exercise 3.1.1
#include<stdio.h>
int main()
{
	float iq[] = {2.1,3.1,4.1,2.2,3.2};
	int workers;
	puts("Co-workers's IQ");
	for(workers =0;workers<5;workers++)
	{
		printf("Co-worker #%d, %.2f\n", workers+1,iq[workers]);
	}
	return 0;
}