#include<stdio.h>
#include<string.h>

int main()
{
	char string[16];
	char password[] = "please";
	int result;

	printf("Enter your secret password: ");
	gets(string);

	result = strcmp(string,password);
	if(result == 0)
		printf("Entry granted");
	else
		puts("Sorry, wrong password");
	return 0;
}