#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993


//int HOME(int x)
//{
//
//	printf("If You Want To Excute New Function, Input '1'");
//	scanf_s("%d", &x);
//
//	if(x == 1)
//		goto Home;
//	return 0;
//}

double Radian(double x)
{
	x = (int)x % 360;
	return (double)(PI * x) / 180;
}

double Gradian(double x)
{
	return Radian(x / 1.111111);
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
	return (Pow(-1, n) * Pow(x, 2 * n) / (Fact(2 * n)) + Cos(x, n - 1));

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
	return PI / 2 - Arcsin(x, n);
}

double Arctan(double x, int n)
{
	if (n <= 0)
		return x;
	return ((Pow(-1, n) * Pow(x, 2 * n + 1)) / (2 * n + 1) + Arctan(x, n - 1));
}

float Ex(float x, int n)
{
	if (n <= 0)
		return 1;
	return Pow(x, n) / Fact(n) + Ex(x, n - 1);
}

float Lnx(float x, int n)
{
	if (n <= 1)
		return (x - 1) / (x + 1);
	return (Pow((x - 1) / (x + 1), 2 * n - 1) / (2 * n - 1) + Lnx(x, n - 1));

}

float Pow2(float x, float y, float n)
{
	return Ex(2 * Lnx(x, n) / y, n);
}



int main()
{
	int select;


Home:

	printf("input your desired function\n");
	printf("1. cos(x)\n2. sin(x)\n3. tan(x)\n4. acos(x)\n5. asin(x)\n6. atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x)\n");
	printf("--------------------------------------------------------\n");
	scanf_s("%d", &select);
	printf("--------------------------------------------------------\n");

	if (select == 1)
	{
		int type,x;
		double degree, radian, gradian;

		printf("Cos(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);

			printf("Cos(%.3f) = %f", degree, Cos(Radian(degree), 100));

			printf("If You Want To Excute New Function, Input '1'");
			scanf_s("%d", &x);

			if (x == 1)
				goto Home;
			return 0;
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Cos(%.3f) = %f", radian, Cos((radian), 100));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			scanf_s("%lf", &gradian);
			printf("Cos(%.3f) = %f", gradian, Cos((gradian), 100));
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
		double x, Degree;

		printf("Arccos(x) has been chosen\n");
		printf("Input Your Desired Degree Value\n");


		scanf_s("%lf", &x);
		Degree = 180 * Arccos(x, 80) / PI;
		printf("Arccos(%f) = %.1f", x, Degree);

	}

	else if (select == 5)
	{
		double x, Degree;

		printf("Arcsin(x) has been chosen\n");
		printf("Input Your Desired Degree Value\n");
		scanf_s("%lf", &x);

		Degree = 180 * Arcsin(x, 80) / PI;
		if (x <= 0)
			Degree = 360 + 180 * Arcsin(x, 80) / PI;

		printf("Arcsin(%f) = %.1f", x, Degree);

	}

	else if (select == 6)
	{
		double x, Degree;

		printf("Arctan(x) has been chosen\n");
		printf("Input Your Desired Degree Value\n");
		scanf_s("%lf", &x);

		Degree = 180 * Arctan(x, 1000) / PI;

		printf("Arctan(%f) = %.3f", x, Degree);

	}

	else if (select == 7)
	{

		float x, y;

		printf("x^y has been chosen\n");
		printf("input two numbers x and y\n");
		scanf_s("%f %f", &x, &y);
		printf("%.3f^%.3f = %.3f", x, y, Pow(x, y));
	}

	else if (select == 8)
	{
		float x, y;
		printf("x^(1/y) has been chosen\n");
		printf("Input two number : \n");
		scanf_s("%f %f", &x, &y);
		printf("%.3f^(1/%.3f) = %.3f", x, y, Pow2(x, y, 10));

	}

	else if (select == 9)
	{
		float x;
		printf("e^x has been chosen\n");
		printf("Input the x : \n");
		scanf_s("%f", &x);
		printf("e^%f = %.3f", x, Ex(x, 200));
	}

	else if (select == 10)
	{
		float x;
		printf("logex has been chosen\n");
		printf("Input the x : \n");
		scanf_s("%f", &x);
		printf("loge%.3f = %.3f", x, 2 * Lnx(x, 400));
	}
}

