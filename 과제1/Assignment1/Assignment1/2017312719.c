#include <stdio.h>

/*
void main(void)
{
	printf("I love programming\n");
	printf("You will love it too once");
	printf("you know the trick\n");
	getchar();
}
*/

/*
void main(void)
{
	printf("Line : %d\n", __LINE__);
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("Line : %d\n\n", __LINE__);
	printf("ANIS : %d\n", __STDC_SECURE_LIB__);
	printf("ANIS : %d\n", __STDC_HOSTED__);
	getchar();
}
*/

#define pi 3.412

/*
void main(void)
{
	double height, radius, base, volume;

	printf("Enter the height and radius of the cone : ");
	scanf_s("%lf %lf", &height, &radius);

	base = pi * radius * radius;
	volume = (1.0/3.0) * base * height;

	printf("\nThe volume of a cone is %f\n", volume);
	system("pause");
}
*/

/*
void main(void)
{
	printf("I love programming\n");
	printf("You will love it too once");
	printf("you know the trick\n");
	system("pause");
}
*/

/*
void main(void)
{	/*......................Declaration........................*/
float		x, y;
int			code;
short int	count;
long int	amount;
double		deviation;
unsigned	n;
char	c;

/*.......................computation,,,,,,,,,,,,,,,,,,,,,,,*/
.	.	.	.
.	.	.	.
.	.	.	.
}   /*.......................Program End.......................*/
*/

/*
int main(void)
{
	int int1, int2, int_sum;									//declare int type variable
	float float1, float2, float_sum;							//declare float type variable
	int1 = 17; int2 = 25; int_sum = int1 + int2;				//define int type variable value
	float1 = 3.5; float2 = 7.8; float_sum = float1 + float2;	//define float type variable value

	printf("int1 = %3d, int2 = %3d\n", int1, int2);
	printf("int1 + int2 = %d\n\n", int_sum);					//int1+int2
	printf("float1 = %3.2f, float2 = %3.2f\n", float1, float2);
	printf("float1 + float2 = %3.2f\n\n", float_sum);			//float1+float2

	printf("int1 + float2 = %3.2f\n\n", int1 + float2);			//int1+float2
	return 0;
}
*/


main()
{
	/*................................................DECLARATION...................................................*/
	float		x, p;
	double		y, q;
	unsigned	k;
	/*................................................DECARATION AND ASSIGNMENT.....................................*/
	int			m = 54321;
	long int	n = 1234567890;
	/*................................................ASSIGNENT.....................................................*/
	x = 1.234567890000;
	y = 9.87654321;
	k = 54321;
	p = q = 1.0;
	/*................................................PRINTING......................................................*/
	printf("m = %d\n", m);
	printf("n = %ld\n", n);
	printf("x = %.12lf\n", x);
	printf("x = %f\n", x);
	printf("y = %.12lf\n", y);
	printf("y = %lf\n", y);
	printf("k = %u p = %f q = %.12lf\n", k, p, q);
}

