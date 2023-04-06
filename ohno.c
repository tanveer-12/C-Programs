// GOTO statement
/*#include<stdio.h>
int main()
{
	int naughty = 0;

	loop:
	puts("naughty , naughty");
	naughty++;
	if(naughty < 10 ) goto loop;
	return 0;
} */

//With FOR LOOP
/*
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
		printf("Naughty, naughty\n");
	return 0;

} */

//GOTO needed in nested loop
#include<stdio.h>
int main()
{
	int x = 1;
	char a;
	while(x < 10)
	{
		a = 'A';
		while(a < 'J')
		{
			printf("%d%c\t",x,a);
			if(x == 5 && a == 'E')goto rescue;
			a++;
		}
		putchar('\n');
		x++;
	}
	rescue:
	return 0;
}