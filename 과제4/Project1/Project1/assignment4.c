#include <stdio.h>

/*---------------------------------------------COPY AND PASTE---------------------------------------------*/

/*
main()
{
	int y;

	y = mul(10, 5);

}

int mul(int x, int y)
{
	int p;
	p = x * y;
	return (p);
}
*/

/*
void printline(void);
void value(void);

main()
{
	printline();
	value();
	printline();
}

void printline(void)
{
	int i;
	for (i = 1; i <= 35; i++)
		printf("%c", '-');
	printf("\n");
}

void value(void)
{
	int year, period;
	float inrate, sum, principal;

	printf("Principal amount?");
	scanf_s("%f", &principal);
	printf("Interest Rate? ");
	scanf_s("%f", &inrate);
	printf("Period?  ");
	scanf_s("%d", &period);

	sum = principal;
	year = 1;
	while (year <= period)
	{
		sum = sum *= (1 + inrate);
		year = year + 1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n", principal, inrate, period, sum);
}
*/

/*
void printline(char c);
void value(float, float, int);

main()
{
	float principal, inrate;
	int period;

	printf("Enter Principal amount, interest");
	printf(" rate, and period\n");
	scanf_s("%f %f %d", &principal, &inrate, &period);
	printline('Z');
	value(principal, inrate, period);
	printline('Z');
}

void printline(char ch)
{
	int i;
	for (i = 1; i <= 52; i++)
		printf("%c", ch);
	printf("\n");
}

void value(float p, float r, int n)
{
	int year;
	float sum;
	sum = p;
	year = 1;
	while (year <= n)
	{
		sum = sum * (1 + r);
		year = year + 1;
	}
	printf("%f\t%f\t%d\t%f\n", p, r, n, sum);
}
*/

/*
void printline(char ch, int len);
value(float, float, int);

main()
{
	float principal, inrate, amount;
	int period;
	printf("Enter principal amount, interest");
	printf("rate, and period\n");
	scanf_s("%f %f %d", &principal, &inrate, &period);
	printline('*', 52);
	amount = value(principal, inrate, period);
	printf("\n%f\t%f\t%d\t%f\n\n", principal, inrate, period, amount);
	printline('*', 51);
}

void printline(char ch, int len)
{
	int i;
	for (i = 1; i <= len; i++)
		printf("%c", ch);
	printf("\n");
}

value(float p, float r, int n)
{
	int year;
	float sum;
	sum = p;
	year = 1;
	while (year <= n)
	{
		sum = sum * (1 + r);
		year = year + 1;
	}
	return(sum);
}
*/

/*
main()
{
	int x, y;
	double power(int, int);
	printf("Enter x,y:");
	scanf_s("%d %d", &x, &y);
	printf("%d to power %d is %f\n", x, y, power(x, y));
}

double power(int x, int y)
{
	double p;
	p = 1.0;

	if (y >= 0)
		while (y--)
			p *= x;
	else
		while (y++)
			p /= x;
	return(p);
}
*/

/*
void mathoperation(int x, int y, int *s, int *d);
main()
{
	int x = 20, y = 10, s, d;
	mathoperation(x, y, &s, &d);

	printf("s=%d\nd=%d\n", s, d);
}

void mathoperation(int a, int b, int* sum, int* diff)
{
	*sum = a + b;
	*diff = a - b;
}
*/

/*
float ratio(int x, int y, int z);
int difference(int x, int y);
main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%f \n", ratio(a, b, c));
}

float ratio(int x, int y, int z)
{
	if (difference(y, z))
		return(x / (y - z));
	else
		return(0, 0);
}

int difference(int p, int q)
{
	if (p != q)
		return(1);
	else
		return(0);
}
*/

/*
void function1(void);
void function2(void);
main()
{
	int m = 1000;
	function2();

	printf("%d\n", m);
}

void function1(void)
{
	int m = 10;

	printf("%d\n", m);
}

void function2(void)
{
	int m = 100;

	function1();
	printf("%d\n", m);
}
*/

/*
int fun1(void);
int fun2(void);
int fun3(void);
int x;

main()
{
	x = 10;
	printf("x = %d\n", x);
	printf("x = %d\n", fun1());
	printf("x = %d\n", fun2());
	printf("x = %d\n", fun3());
}

fun1(void)
{
	x = x + 10;
}

int fun2(void)
{
	int x;
	x = 1;
	return(x);
}

fun3(void)
{
	x = x + 10;
}
*/

/*
void stat(void);

main()
{
	int i;
	for (i = 1; i <= 3; i++)
		stat();
}

void stat(void)
{
	static int x = 0;
	x = x + 1;
	printf("x = %d\n", x);
}
*/

/*---------------------------------------------Practice1---------------------------------------------*/

/*
#include <math.h>

main()
{
	float x1, x2, x3, y1, y2, y3;
	float dis1, dis2, dis3;

	printf("Input the point1 (x1, y1)\n");
	scanf_s("%f %f", &x1, & y1);
	printf("Input the point2 (x2, y2)\n");
	scanf_s("%f %f", &x2, & y2);
	printf("Input the point3 (x3, y3)\n");
	scanf_s("%f %f", &x3, & y3);

	dis1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	dis2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	dis3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 1));

	if (dis1 >= dis2 & dis1 >= dis3)
		printf("The closest points are point1 and point2. Distance : %f", dis1);

	else if (dis2 >= dis1 & dis2 >= dis3)
		printf("The closest points are point2 and point3. Distance : %f", dis2);

	else
		printf("The closest points are point1 and point3. Distance : %f", dis3);

}
*/

/*---------------------------------------------Practice2---------------------------------------------*/

#include <math.h>

main()
{
	float a1, b1, c1, a2, b2, c2, a3, b3, c3, d, x1, x2;

	printf("Enter A1, B1 and C1 values into first quadratic equation A1x^2 + B1x + C1 = 0\n");
	scanf_s("%f %f %f", &a1, &b1, &c1);
	printf("Enter A2, B2 and C2 values into Second quadratic equation A2x^2 + B2x + C2 = 0\n");
	scanf_s("%f %f %f", &a2, &b2, &c2);

	printf("\nWe want to find the intersection points between the two equations if it exist.\n");

	a3 = a2 - a1, b3 = b2 - b1, c3 = c2 - c1;

	d = pow(b3, 2) - (4 * a3 * c3);

	if (d > 0)
	{
		x1 = ((-b3 + sqrt(d)) / (2 * a3));
		x2 = ((-b3 - sqrt(d)) / (2 * a3));

		printf("The two equations intersect at points x = %.2lf & x = %.2lf\n", x1, x1);
	}

	else if (d == 0)
	{
		x1 = ((-b3 + sqrt(d)) / (2 * a3));
		printf("The two equations intersect at only point x = %.2lf\n", x1);
	}

	else
	{
		printf("The equations don't intersect at any point\n");
	}
}