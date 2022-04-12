#include <stdio.h>

/*
main()
{
	int a, b, c, d;
	float ratio;

	printf("Enter four integer values\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	if (c - d != 0) 
	{
		ratio = (float)(a + b) / (float)(c - d);
		printf("Ratio = %f\n", ratio);
	}
}
*/

/*
#define ACCURACY 0.0001
main()
{
	int n, count;
	float x, term, sum;
	
	printf("Enter value of x:");
	scanf_s("%f", &x);
	n = term = sum = count = 1;
	while (n <= 100)
	{
		term = term * x / n;
		sum = term + sum;
		count = count + 1;
		if (term < ACCURACY)
			n = 999;
		else
			n = n + 1;
	}
	printf("Terms = %d Sum = %f\n", count, sum);
}
*/

/*
main()
{
	float A, B, C;
	printf("Enter three values\n");
	scanf_s("%f %f %f", &A, &B, &C);
	printf("\nLargest value is");
	if (A > B)
	{
		if (A > C)
			printf("%f\n", A);
		else
			printf("%f\n", C);
	}
	else
	{
		if (C > B)
			printf("%f\n", C);
		else
			printf("%f\n", B);
	}
}
*/

/*
main()
{
	int units, custnum;
	float charges;
	printf("Enter CUSTOMER NO. and UNITS cousumed\n");
	scanf_s("%d %d", &custnum, &units);
	if (units <= 200)
		charges = 0.5 * units;
	else if (units <= 400)
		charges = 100 + 0.65 * (units - 200);
	else if (units <= 600)
		charges = 230 + 0.8 * (units - 400);
	else
		charges = 390 + (units - 600);
	printf("\n\Customer No: %d Charges = %.2f\n",custnum,charges);
}
*/

/*
#define MAXLOAN 50000
main()
{
	long int loan1, loan2, loan3, sancloan, sum23;
	printf("Enter the values of previous two loans:\n");
	scanf_s("%ld %ld", &loan1, &loan2);
	printf("\nEnter the value of new loan:\n");
	scanf_s("%ld", &loan3);
	sum23 = loan2 + loan3;
	sancloan = (loan1 > 0) ? 0 : ((sum23 > MAXLOAN) ? MAXLOAN - loan2 : loan3);
	printf("\n\n");
	printf("Previous loans pending:\n$ld %ld\n", loan1, loan2);
	printf("Loan requested = %ld\n", loan3);
	printf("Loan sanctioned = %ld\n", sancloan);

}
*/

/*
#include <math.h>
main()
{
	double x, y;
	int count;
	count = 1;
	printf("Enter FIVE real values in a LINE \n");

read:
	scanf_s("%lf", &x);
	printf("\n");
	if (x < 0)
		printf("Value - %d is negative\n", count);
	else
	{
		y = sqrt(x);
		printf("%lf\t %lf\n", x, y);
	}
	count = count + 1;
	if (count <= 5)
goto read;
	printf("\nEnd of computation");
}
*/

/*
main()
{
	int count, n;
	float x, y;
	printf("Enther the values of x and n : ");
	scanf_s("%f %d", &x, &n);
	y = 1.0;
	count = 1;
	
	while (count <= n)
	{
		y = y * x;
		count++;
	}
	printf("\nx = %f; n = %d; x to power n = %f\n", x, n, y);
}
*/

/*
#define COLMAX 10
#define ROWMAX 12
main()
{
	int row, column, y;
	row = 1;
	printf("	MULTIPLICATION TABLE	\n");
	printf("----------------------------\n");
	do
	{
		column = 1;
		do
		{
			y = row * column;
			printf("%4d", y);
			column = column + 1;
		} 
		while (column <= COLMAX);
		printf("\n");
		row = row + 1;
	} 
	while (row <= ROWMAX);
	printf("----------------------------\n");
}
*/

/*
#define	FIRST 360
#define SECOND 240

main()
{
	int n, m, i, j,
		roll_number, marks, total;
	printf("Enter number of students and subjections\n");
	scanf_s("%d %d", &n, & m);
	for (i = 1; i <= n; ++i)
	{
		printf("Enter roll_number :");
		scanf_s("%d", &roll_number);
		total = 0;
		printf("\nEnter marks of %d subjections for ROLL NO %d\n", m, roll_number);

		for (j = 1; j <= m; j++)
		{
			scanf_s("%d", &marks);
			total = total + marks;
		}
		printf("TOTAL MARKS = %d", total);
		if (total >= FIRST)
			printf("(First Division)\n\n");
		else if (total >= SECOND)
			printf("(Second Division)\n\n");
		else
			printf("(***FAIL***)\n\n");
	}
}
*/

/*
main()
{
	int m;
	float x, sum, average;

	printf("This Program computes the average of a set of numbers\n");
	printf("Enter values one after another\n");
	printf("Enter a NEGATIVE number at the end.\n\n");
	sum = 0;
	for (m = 1; m <= 1000; ++m)
	{
		scanf_s("%f", &x);
		if (x < 0)
			break;
		sum += x;
	}
	average = sum / (float)(m - 1);
	printf("\n");
	printf("Numbers of values = %d\n", m - 1);
	printf("Sum               = %f\n", sum);
	printf("Average           = %f\n", average);
}
*/

/*
#define LOOP 100
#define ACCURACY 0.0001

main()
{
	int n;
	float x, term, sum;
	printf("Input value of x : ");
	scanf_s("%f", &x);
	sum = 0;
	for (term = 1, n = 1; n <= LOOP; ++n)
	{
		sum += term;
		if (term <= ACCURACY)
			goto output;
		term *= x;
	}
	printf("\nFINAL VALUE OF N IS SUFFICIENT\N");
	printf("TO ACHIEVE DESIRED ACCURACY");
	goto end;
	output:
	printf("\nEXIT FROM LOOP\n");
	printf("SUM = %f; No.of temrs = %d\n", sum, n);
	end:
	;
}
*/

/*
#include <math.h>
main()
{
	int count, negative;
	double number, sqroot;
	printf("Enter 9999 to STOP\n");
	count = 0;
	negative = 0;
	while (count <= 100)
	{
		printf("Enter a number : ");
		scanf_s("%lf", &number);
		if (number == 9999)
			break;
		if (number < 0)
		{
			printf("Number is Negative\n\n");
			negative++;
			continue;
		}
		sqroot = sqrt(number);
		printf("Number = %lf\nSquare root = %lf\n\n", number, sqroot);
		count++;
	}
	printf("Number of items done = %dn\n",count);
	printf("\n\nNegarive items = %d\n", negative);
	printf("END OF DATA\n");
}
*/

/*
main()
{
	double n, Pos_Pow, Neg_Pow;

	Pos_Pow = Neg_Pow = 1;
	printf("-----------------------------------------------------\n");
	printf("2 to power n\tn\t2 to power -n\n");
	printf("-----------------------------------------------------\n");

	for (n = 0; n <= 20; n++)
	{
		printf("%8.lf\t%.lf\t%.12lf\n",Pos_Pow, n, Neg_Pow);
		Pos_Pow *= 2;
		Neg_Pow /= 2;
	}
}
*/
