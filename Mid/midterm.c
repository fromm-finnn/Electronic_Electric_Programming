#include <stdio.h>

main()
{
	int select;

	printf("Input Your Desired Function");
	printf("1. Cos(x)\n2. Sin(x)\n3. Tan(x)\n4. Acos(x)\n5. Asin(x)\n6. Atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x) ");
	scanf_s("%d", &select);

	if (select == 1)
	{
		double degree;

		printf("Input Your Desired Value");
		scanf_s("%lf", &degree);

		printf("%lf", cos(degree);
	}
}

double cos(double x)
{
	double result, exp;
	int i, j, k, fact = 1;

	k = 1;

	for (i = 0; i >= 0; i + 2)
	{
		exp = x ^ i;
		for (j = 1; j <= i; j++)
		{
			fact = fact * j;
		}

		if (k % 2 == 0)
			result = -exp * (1 / fact);

		else
			result = exp * (1 / fact);

		k++;
	}
	
	return result;
}