#include <stdio.h>

/*------------------------------------------------------Practice1-----------------------------------------------------*/

/*
#include <math.h>
#define PI 3.14

main()
{
	float radius, area;

	printf("Input the radius of circle : ");
	scanf_s("%f", &radius);

	area = radius * radius * PI;

	printf("\nThe area of circle is : %.2f", area);
}
*/

/*------------------------------------------------------Practice2-----------------------------------------------------*/

/*
#include <math.h>
#define PI 3.14159265358979

main()
{
	float x, y;
	float r, angle, radian;

	printf("Input the radius in polar coordinate value\n");
	scanf_s("%f", &r);
	printf("Input the angle in polar coordinate value\n");
	scanf_s("%f", &angle);

	radian = PI * angle / 180;
	x = r * cos(radian);
	y = r * sin(radian);

	printf("(%.1f,%.1fPi radian) in polar coordinate is (%.1f,%.1f) in cartesian coordinate", r, radian/PI, x, y);
}
*/

/*------------------------------------------------------Practice3-----------------------------------------------------*/

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