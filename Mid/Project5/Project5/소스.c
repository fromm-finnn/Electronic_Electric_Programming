#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993
#define GRADIAN 1.111111111111111111111111111


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

void Line()
{
	printf("-----------------------------------------\n");
}

double Radian(double x)
{
	x = (int)x % 360;
	return (double)(PI * x) / 180;
}

double Gradian(double x)
{
	return Radian(x/GRADIAN);
}

double Fact(int x)
{
	if (x == 1)
		return 1;

	return	x * Fact(x - 1);
}


double Pow(float x, int n)
{
	if (n <= 0)
		return 1;

	return x * Pow(x, n - 1);
}

float Pow1(float x, int n)
{
	if (n >= 0)
		return 1;

	return (1/x) * Pow(x, n - 1);
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
	if ((Cos(x, n) + 0.00001) <= 0.0001)
	{
		printf("Result is Undefined\n", x);
	}

	return Sin(x, n) / Cos(x, n);
}

double Arcsin(double x, int n)
{
	if (x == 1)
		return PI / 2;
	else if (x == -1)
		return -PI / 2;

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


Menu:

	printf("input your desired function\n");
	printf("1. cos(x)\n2. sin(x)\n3. tan(x)\n4. acos(x)\n5. asin(x)\n6. atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x)\n");
	
	scanf_s("%d", &select);
	Line();

	if (select == 1)
	{
		int type;
		double degree, radian, gradian;

		printf("Cos(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\nLine()");
		scanf_s("%d", &type);
		Line();

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);

			printf("Cos(%.4f) = %.4f\n", degree, Cos(Radian(degree), 200));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Cos(%.4f) = %.4f\n", radian, Cos((radian), 200));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			scanf_s("%lf", &gradian);
			printf("Cos(%.4f) = %.4f\n", gradian, Cos(Gradian(gradian), 200));
		}
	}

	else if (select == 2)
	{
		int type;
		double degree, radian, gradian;

		printf("Sin(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);
			printf("Sin(%.4f) = %.4f\n", degree, Sin(Radian(degree), 50));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Sin(%.4f) = %f\n", radian, Sin((radian), 100));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			scanf_s("%lf", &gradian);
			printf("Sin(%.4f) = %.4f\n", gradian, Sin(Gradian(gradian), 100));
		}
	}

	else if (select == 3)
	{
		int type;
		double degree, radian, gradian;

		printf("Tan(x) has been chosen\n");
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		printf("--------------------------------------------------------\n");
		scanf_s("%d", &type);
		printf("--------------------------------------------------------\n");

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			scanf_s("%lf", &degree);
			printf("Tan(%.4f) = %.4f\n", degree, Tan(Radian(degree), 100));
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			scanf_s("%lf", &radian);
			printf("Tan(%.4f) = %.4f\n", radian, Tan((radian), 100));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			scanf_s("%lf", &gradian);
			printf("Tan(%.4f) = %.4f\n", gradian, Tan(Gradian(gradian), 100));
		}
	}

	else if (select == 4)
	{
		double x, degree, gradian;

		printf("Arccos(x) has been chosen\n");
		printf("Input Your Desired Value(-1<= Value <=1)\n");

		scanf_s("%lf", &x);
		degree = 180 * Arccos(x, 80) / PI;
		gradian = degree * GRADIAN;
		printf("Arccos(%.4f) = %.4f in Degree\nArccos(%.4f) = %.4f in Radian\nArccos(%.4f) = %.4f in Gradian", x, degree, x, Arccos(x,80), x, gradian);

	}

	else if (select == 5)
	{
		double x, degree, gradian;

		printf("Arcsin(x) has been chosen\n");
		printf("Input Your Desired Degree Value(-1<= Value <=1)\n");
		scanf_s("%lf", &x);

		degree = 180 * Arcsin(x, 80) / PI;
		if (x < 0)
			degree = 360 + 180 * Arcsin(x, 80) / PI;
		
		gradian = degree * GRADIAN;

		printf("Arcsin(%.4f) = %.4f in Degree\nArcsin(%.4f) = %.4f in Radian\nArcsin(%.4f) = %.4f in Gradian", x, degree, x, Arcsin(x, 80), x, gradian);

	}

	else if (select == 6)
	{
		double x, degree, gradian;

		printf("Arctan(x) has been chosen\n");
		printf("Input Your Desired Value\n");
		scanf_s("%lf", &x);
		
		degree = 180 * Arctan(x, 1000) / PI;
		gradian = degree * GRADIAN;
		printf("Arctan(%.4f) = %.4f in Degree\nArctan(%.4f) = %.4f in Radian\nArctan(%.4f) = %.4f in Gradian", x, degree, x, Arctan(x, 80), x, gradian);

	}

	else if (select == 7)
	{
		float x, y;
		
		
		printf("x^y has been chosen\n");
	
	Try1:
		printf("input two numbers x and y (y should be integer)\n");
		scanf_s("%f %f", &x, &y);
		
		if (y - (int)y != 0)
		{
			printf("y should be integer. Try once again!\n");
			goto Try1;
		}

		else
		{

			if (y >= 0)
				printf("%.3f^%.f = %.3f", x, y, Pow(x, y));
			else
				printf("%.3f^%.f = %.3f", x, y, Pow1(x, y));

		}
	}

	else if (select == 8)
	{
		float x, y;
		printf("x^(1/y) has been chosen\n");

	Try2:
		printf("Input two numbers x and y (y should be integer)\n");
		scanf_s("%f %f", &x, &y);

		if (y - (int)y != 0)
		{
			printf("y should be integer. Try once again!\n");
			goto Try2;
		}

		else
			printf("%.3f^(1/%.f) = %.3f", x, y, Pow2(x, y, 10));

	}

	else if (select == 9)
	{
		float x;
		printf("e^x has been chosen\n");
		printf("Input the x : \n");
		scanf_s("%f", &x);
		printf("e^%.4f = %.4f", x, Ex(x, 200));
	}

	else if (select == 10)
	{
	float x;
	printf("logex has been chosen\n");
	printf("Input the x : \n");
	scanf_s("%f", &x);
	printf("loge%.3f = %.3f", x, 2 * Lnx(x, 400));
	}

	else
	{
		getchar();
		printf("Your Input Is Wrong! Try Again!");
		goto Menu;
	 }
	
}

