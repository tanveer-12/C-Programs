#include<stdio.h>
int main()
{
	char phrase[]= "sushi is mooshi";
	char ch;
	int x = 0;
	do
	{
		ch = phrase[x];
		putchar(ch);
		x++;
	}
	while(ch != '\0');

	putchar('\n');
	return 0;
}