#include <stdio.h>

/*
main()
{
	int num, i, j, k, l, space;

	printf("Input the number of rows : ");
	scanf_s("%d", &num);

	num = num + 64;

	

	for (i = 65; i <= num; i++)
	{
		k = 65;
		l = i - 1;

		for (space = num - i; space > 0 ; space--)
		{
			printf(" ");
		}

		for (j = 1; j <= i-64; j++)
		{

			printf("%c", k);
			++k;
		}

		for (j = 1; j <= i - 65; j++)
		{
			if (i == 65)
				break;

			printf("%c", l);
			--l;
		}

		printf("\n");
	}
}
*/

/*
main()
{
	number(1);
}


int Number(int n)
{
	if (n <= 50)
	{
		printf("%d ", n);
		Number(n + 1);
	}
}
*/

/*
main()
{
	int i, num, a,b;
	
	printf("Input the nubmer : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num ; i++)
	{
		printf("%d ", Fibo(i));
	}
}

int Fibo(int n)
{
	{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;

		return(Fibo(n - 1) + Fibo(n - 2));

	}
}
*/