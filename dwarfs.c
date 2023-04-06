#include<stdio.h>
#include<string.h>

int main()
{
	char dwarf[7][8] = {"bashful","doc","dopey","grumpy","happy","sneezy","sleepy"};
	char input[64];
	int named = 0;
	int x;

	puts("See if you can name all seven dwarfs: ");

	while(named<7)
	{
		if(named ==1)
			printf("\nSo far you've named %d dwarf.\n",named);
		else
			printf("\nSO far you've named %d dwarfs.\n",named);

		printf("Enter a name: ");
		gets(input);

		if(strcmp(input,"")==0)
			break;

		for(x=0;x<7;x++)
		{
			if(strcmp(input,dwarf[x])==0)
			{
				printf("Yes! %s is right.\n",input);
				named++;
			}
		}
	}
	return 0;
}