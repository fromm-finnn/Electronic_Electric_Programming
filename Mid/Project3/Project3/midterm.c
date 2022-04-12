#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993


double Radian(double x)
{
	x = (int)x % 360;
	return (double)(PI * x) / 180;
}

double Fact(int x)
{
	if (x == 1)
		return 1;

	return	x * Fact(x - 1);
}


double Pow(double x, float n)
{
	if (n <= 0)
		return 1;

	return x * Pow(x, n - 1);
}

double Cos(double x, int n)
{
	if (n <= 0)
		return 1;
	return (Pow(-1, n) * Pow(x,	2 * n) / (Fact(2*n)) +Cos(x, n-1));

}

double Sin(double x, int n)
{
	if (n <= 0)
		return x;
	return (Pow(-1, n) * Pow(x, 2 * n + 1) / Fact(2 * n + 1)) + Sin(x, n - 1);

}

double Tan(double x, int n)
{
	return Sin(x, n) / Cos(x, n);
}

double Arcsin(double x, int n)
{
	if (n <= 0)
		return x;
	return ((Fact(2 * n) / (Pow(2, 2 * n) * Pow(Fact(n), 2))) * (Pow(x, 2 * n + 1) / (2 * n + 1)) + Arcsin(x, n - 1));

	
}

double Arccos(double x, int n)
{
	return PI/2 - Arcsin(x, n);
}

float XPowerY(float x, float y)
{
	return Pow(x, (1 / y));
}
//double Arcsin(double x, int n)
//{
//
//}
//
//double Arctan(double x, int n)
//{
//
//}


int main()
{
	int select;

	printf("input your desired function\n");
	printf("1. cos(x)\n2. sin(x)\n3. tan(x)\n4. acos(x)\n5. asin(x)\n6. atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x)\n");
	printf("--------------------------------------------------------\n");
	scanf_s("%d", &select);
	printf("--------------------------------------------------------\n");

	if (select == 1)
	{
		int type;
		double degree, radian;

		printf("Cos(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);

			printf("Cos(%.2f) = %f", degree, Cos(Radian(degree), 100));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Cos(%.2fradian) = %f", radian, Cos((radian), 100));
		}
	}

	else if (select == 2)
	{
		int type;
		double degree, radian;

		printf("Sin(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);
			printf("Sin(%.2f) = %f", degree, Sin(Radian(degree), 100));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Sin(%.2fradian) = %f", radian, Sin((radian), 100));
		}
	}

	else if (select == 3)
	{
		int type;
		double degree, radian;

		printf("Tan(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);
			printf("Tan(%.2f) = %f", degree, Tan(Radian(degree), 100));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Tan(%.2fradian) = %f", radian, Tan((radian), 100));
		}
	}

	else if (select == 4)
	{
		int type;
		double k;

		printf("Arccos(x) has been chosen\n");
		printf("Input Your Desired Output Type\n1)Degrees\n2)Radians\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &k);
			printf("%f", Arccos(k, 100));
		}

	/*	else if (type == 2)
		{
			printf("input your desired radian value\n");
			scanf_s("%lf", &radian);
			printf("tan(%.2fradian) = %f", radian, tan((radian), 100));
		}*/
	}

	else if (select == 5)
	{
	int type;
	double k;

	printf("Arcsin(x) has been chosen\n");
	printf("Input Your Desired Output Type\n1)Degrees\n2)Radians\n");
	printf("--------------------------------------------------------\n");
	scanf_s("%d", &type);
	printf("--------------------------------------------------------\n");

	if (type == 1)
	{
		printf("Input Your Desired Degree Value\n");
		scanf_s("%lf", &k);
		printf("%.1lf", 180 * Arcsin(k, 100) / PI);
	}

	/*	else if (type == 2)
		{
			printf("input your desired radian value\n");
			scanf_s("%lf", &radian);
			printf("tan(%.2fradian) = %f", radian, tan((radian), 100));
		}*/
	}

	
	//else if (select == 8)
	//{
	//float x, y;
	//printf("Input two number : \n");
	//scanf_s("%f %f", &x, &y);
	//printf("%f^(1/%f) = %f", x, y, XPowerY(x, y));

	//}

}