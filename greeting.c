#include<stdio.h>
int main()
{
	char prompt[] = "Please enter your first name: ";
	char gratis[] = "Thanks!";
	char first[25];
	char last[25];

	printf(prompt);
	gets(first);
	printf("Please enter your last name: ");
	scanf("%s",&last);
	puts(gratis);
	printf("Pleased to meet you, %s %s!\n", first,last);
	return 0;
}