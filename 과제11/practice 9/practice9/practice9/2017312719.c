#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*----------------------------------------------------------------Practice 1----------------------------------------------------------------*/


main()
{
	int n, i;

	printf("Input n?");
	scanf_s("%d", &n);

	char* string = malloc(sizeof(char) * n);
	char* copy_string = malloc(sizeof(char) * n);

	printf("Input string?");
	scanf("%s", string);

	strcpy(copy_string, string);

	for (i = 0; i < 5; i++)
	{
		string[i] = copy_string[4 - i];
	}

	printf("%s", string);
}


/*----------------------------------------------------------------Practice 2----------------------------------------------------------------*/

/*
int Steal(int bag[], int n)
{
	int choco = bag[0], cmp = 0, copy, i, sum = 0;

	for (i = 1; i < n; i++)
	{
		if (choco > cmp)
			copy = choco;
		else
			copy = cmp;

		choco = cmp + bag[i];
		cmp = copy;
	}

	if (choco > cmp)
		sum = choco;
	else
		sum = cmp;

	return sum;
}

main()
{
	int n, i, sum;

	printf("Input numbers of bag?");
	scanf_s("%d", &n);

	int* bags = malloc(sizeof(int) * n);

	printf("Input the bags array?");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &bags[i]);
	}
	sum = Steal(bags, n);
	printf("answer : %d chocolates", sum);
	
}
*/