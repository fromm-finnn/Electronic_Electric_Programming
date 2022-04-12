#include <stdio.h>

main()
{
	double x, n, sum, fact, power;

	printf("Enter the angle in degree: ");
	scanf_s("%lf", &x);

	x = (3.14159265358979 * x) / 180.0;
	printf("\n\nIt's radian : %f\n\n", x);

	n = 50;
	sum = 0;
	for (int i = 0; i <= n; i++)
	{
		fact = 1;
		power = 1;
		for (int j = 1; j <= 2 * i + 1; j++)
		{
			fact *= j;
			power *= x;
		}
		sum += ((i % 2 ? -1 : 1) / fact) * power;
	}
	printf("sin(%f) = %f\n", x, sum);
}
