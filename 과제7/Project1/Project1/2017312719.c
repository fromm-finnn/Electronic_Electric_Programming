#include <stdio.h>

/*
main()
{
	int array[100] = { 0 }, composite[100] = { 0 }, prime[100] = { 0 }, count = 1, i, j, k;

	printf(" (*do not input 1* : 1 is neither prime and composite number)(If you want to stop, input 0 )\n");

	for (i = 0; i <= 99; i++)
	{
		printf("Input the No.%d positive integer numbers : \n",i);
		
		scanf_s("%d", &array[i]);
		count++;
		if (array[i] == 0)
			break;

		for (j = 2; j <= array[i]; j++)
		{
			if (array[i] % j == 0)
				break;
		}

		if (j== array[i])
		{
			prime[i] = array[i];
			composite[i] = 0;
		}

		else
		{
			composite[i] = array[i];
			prime[i] = 0;
		}
	}

	printf("Show the Prime number : ");

	for (i = 0; i <= 99; i++)
	{
		if (prime[i] != 0)
		printf("%d ", prime[i]);
		
	}
	
	printf("\nShow the Composite number : ");

	for (i = 0; i <= 99; i++)
	{
		if (composite[i] != 0)
		printf("%d ", composite[i]);
	}

}
*/

/*
main()
{
	int A[3][3], B[3][3], Mul[3][3], i, j;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("Input the Row%d and Column%d of the 1'st matrix : ", i+1, j+1);
			scanf_s("%d", &A[i][j]);
		}
	}
		
	printf("The First Martrix\n");
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("Input the Row%d and Column%d of the 2'nd matrix : ", i+1, j+1);
			scanf_s("%d", &B[i][j]);
		}
	}
	
	printf("The Second Martrix\n");
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}


	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			Mul[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];

		}
	}

	printf("The Matrix that is multipled by two Matrices\n");

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", Mul[i][j]);
		}
		printf("\n");
	}

}
*/

/*
main()
{
	int array[10][10], i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 0)
			{
				if (j >= 4)
					break;

				else
					array[i][j] = 1 + j;
			}

			else if (i == 1)
			{
				if (j >= 4)
					break;

				else
					array[i][j] = 8 - j;
			}

			else if (i == 2)
			{
				if (j >= 4)
					break;

				else
					array[i][j] = 9 + j;
			}

			else if (i == 3)
			{
				if (j >= 4)
					break;

				else
					array[i][j] = 16 - j;
			}

			else
				break;
		}
	}

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf("%2d ", array[i][j]);
		}
		
		printf("\n");
	}
}
*/
