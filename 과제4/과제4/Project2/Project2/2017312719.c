#include <stdio.h>

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

/*
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

		printf("The two equations intersect at points x = %.2lf & x = %.2lf\n", x1, x2);
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
*/

/*---------------------------------------------Practice3---------------------------------------------*/

/*
main()
{
	int rows, i, j, space;

	printf("Input the number of rows desired\n");
	scanf_s("%d", &rows);

	space = rows - 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= space; j++)
			printf(" ");

		space--;

		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");

		printf("\n");
	}

	space = 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = space; j >= 1; j--)
			printf(" ");

		space++;

		for (j = 2 * i -1; j <=2*rows -3; j++)
			printf("*");

		printf("\n");
	}

	return(0);
}
*/
