#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993
//main()
//{
//	int select;
//
//	printf("input your desired function\n");
//	printf("1. cos(x)\n2. sin(x)\n3. tan(x)\n4. acos(x)\n5. asin(x)\n6. atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x)\n");
//	scanf_s("%d", &select);
//
//	if (select == 1)
//	{
//		double degree;
//
//		printf("input your desired value\n");
//		scanf_s("%lf", &degree);
//
//		printf("%f", cos(radian(degree)));
//	}
//}

float radian(float x)
{
	return (float)PI * x / 180;
}

float fact(int x)
{
	if (x == 1)
		return 1;

	return	x* fact(x - 1);	
}


float pow(float x, int n)
{
	if (n <= 0)
		return 1;

	return x * pow(x, n - 1);
}
//
//float cos(float x)
//{
//	float sum = 1;
//	int i, k = 1;
//
//	for (i = 0; i <= 50; i += 2)
//	{
//		if (k % 2 == 0)
//			sum -= (pow(x,i) * (1 / (fact(i))));
//
//		else 
//			sum += (pow(x, i) * (1 / (fact(i))));
//
//	}
//
//	k++;
//	return sum;
//}
//
int main()
{
	float sum = 1;
	int i;

	for (i = 0; i <= 50; i ++)
	{
		if (i % 2 == 0)
			sum -= (pow(30, 2*i) * (1 / (fact(2*i))));

		else
			sum += (pow(30, 2*i) * (1 / (fact(2*i))));

	}

	printf("%f", sum);
	
}

