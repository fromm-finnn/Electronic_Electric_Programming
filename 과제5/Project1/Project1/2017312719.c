#include <stdio.h>

/*
main()
{
	int num, i, mul;
	char new;

	start:

	printf("Input the number : ");
	scanf_s("%d", &num);
	
	printf("\n%dX1\t%dX2\t%dX3\t%dX4\t%dX5\t%dX6\t%dX7\t%dX8\t%dX9\t%dX10\n\n", num, num, num, num, num, num, num, num, num, num);
	mul = 0;

	for (i = 1; i <= 10; i++)
	{
		mul = i * num;
		printf("%d\t", mul);
	}

	printf("\n\nIf you want to input new number? (o/x)");
	getchar();
	new = getchar();

	if (new == 'o')
		goto start;
	else if (new == 'x')
		printf("Finish");
}
*/

/*
main()
{
	int num, i, j, flag;

	printf("Input the positive number : ");
	scanf_s("%d", &num);

	if (num == 1)
		printf("1 is neither a prime nor composite number");
	else
		printf("Prime numbers up to %d are \n", num);

	for(i = 2; i <= num; i++)
	{
		for (j = 2; j < i; j++)
			if ((i % j) == 0)
			{
				break;
			}

		if (i == j)
			printf("%d\t",i);
	}

}
*/

/*
main()
{
	int num, sqr, i;

	printf("Input the number :");
	scanf_s("%d", &num);
	
	sqr = num * num;
	printf("\nThe square of the number is : %d\n", sqr);
	
	for (i = 1; i < num; i++)
	{
		sqr = i * i;
		printf("The square of %d is %d \n", i, i, sqr);
	}
}
*/

/*
main()
{
	int rows, i, j, space = 1, count = 0;
	
	printf("Input the number of rows desired\n");
	scanf_s("%d", &rows);

	space = rows - 1;

	for (j = 1; j <= rows; j++)
	{
		for (i = 1; i <= space; i++)
			printf(" ");
		
		space--;

		for (i = 1; i <= 2 * j - 1; i++)
		{
			printf("*");
			count++;
		}

		printf("\n");
	}
	printf("The number of the stars is : %d", count);
	return 0;
}
*/

/*
main()
{
	int high_n1, low_n1, high_n2, low_n2, high_sum, low_sum, a, i;

	printf("Input the two integers with more than 15 digits\n");
	scanf_s("%7d%8d %7d%8d", &high_n1, &low_n1, &high_n2, &low_n2);

	high_sum = high_n1 + high_n2;
	low_sum = low_n1 + low_n2;

	if (low_sum / 100000000 != 0)
	{
		a = low_sum / 100000000;
		high_sum = high_sum + a;
		low_sum = low_sum % (a * 100000000);

	}

	printf("The addition of two numbers is : %d%08d", high_sum, low_sum);
}
*/

/*
#include <windows.h>
main()
{
	int minute, second;

	printf("Input the time (minute:second)\n");
	scanf_s("%d : %d", &minute, &second);

	for (minute; minute >= 0; minute--)
	{
		for (second; second >= 0; second--)
		{
			printf("%d:%d >> ", minute, second);
			Sleep(1000);
		}

		second = 60;
	}

	printf("TIME OVER!");
}
*/

/*
main()
{
	int n, i, a, b, fact, j;

	printf("Input a single integer : \n");
	scanf_s("%d", &n);

	printf("\nThe up to %d'th term of Fibonacci sequence\n", n);
	
	a = 1;
	b = 1;
	
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", a);
			a += b;
		}

		else
		{
			printf("%d ", b);
			b += a;
		}
	}
	
	printf("\n\nThe Factorial of %d is \n", n);
	
	fact = 1;

	for (j = 1; j <= n; j++)
	{
		fact *= j;
	}

	printf("%d", fact);

}
*/

