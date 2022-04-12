#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993		/*Pi to named constant*/
#define GRADIAN 1.111111111111111111111111111					/*GRADIAN to named constant (Gradian = 1.111111 * Degree) */

/*Fistly, Define Fucntions Latter Use*/

void Line()														/*Printing Line function : there are many lines in source code*/
{
	printf("-----------------------------------------\n");
}

void InputError()												/*Printing InputError function : there are many errors could be occur by input in source code*/
{
	getchar();												/*Use getchar(); for remove error when user input character*/
	printf("Your Input is Wrong! Try Again!\n");
}

double Radian(double x)											/*Convert Degree to Radian*/
{
	x = (int)x % 360;											/*Considering Period of Radian*/
	return (double)(PI * x) / 180;
}

double Gradian(double x)										/*Convert Gradian to Radian*/
{
	return Radian(x / GRADIAN);									/*x/1.111111111 = Degree, we want to input radian value to trigonometric function*/
}

double Fact(int x)												/*Factorial Fuction, it means : x!*/
{
	if (x == 1)
		return 1;

	return	x * Fact(x - 1);									/*Use Reculsive Funtion, it means : x * (x-1) * (x-2) * ~ * 2 *1 */
}


double Pow(float x, int n)										/*Power Function, it means : x^n */
{
	if (n <= 0)
		return 1;

	return x * Pow(x, n - 1);									/*Use Reculsive Funtion, it means : x * x * x * ~ * x * x (the number of x is n) */
}

float Pow1(float x, int n)										/*Power Function, it means : x^(1/n) */
{
	if (n >= 0)
		return 1;

	return (1 / x) * Pow(x, n - 1);								/*Use Reculsive Funtion, it means : (1/x) * (1/x) * (1/x) * ~ * (1/x) * (1/x) (the number of x is n) */
}


double Cos(double x, int n)															/*Cos(x) Function, n means the terms of sequence of numbers, if n becomes larger, the result will be more accurate */
{
	if (n <= 0)
		return 1;
	return (Pow(-1, n) * Pow(x, 2 * n) / (Fact(2 * n)) + Cos(x, n - 1));			/*Use Reculsive Funtion, it means : 1 - x^2/2! + x^4/4! - ~ + ((-1)^n)*(x^2n)/2n! (Using taylor series ) */

}

double Sin(double x, int n)															/*Sin(x) Function*/
{
	if (n <= 0)
		return x;
	return (Pow(-1, n) * Pow(x, 2 * n + 1) / Fact(2 * n + 1)) + Sin(x, n - 1);		/*Use Reculsive Function, it means : x - x^3/3! + x^5/5! - ~ + ((-1)^n)*(x^(2n+1))/(2n+1)! (Using taylor series) */

}

double Tan(double x, int n)															/*Tan(x) Fuction*/
{
	if ((Cos(x, n) + 0.00001) <= 0.0001)											/*If x = pi/4 + (pi/2)*n, the result is infinite. So, because Tan(x) = Sin(x)/Cos(x), if Cos(x) is 0, it will cannot be defined */
	{
		printf("Result is Undefined\n", x);
	}

	return Sin(x, n) / Cos(x, n);
}

double Arcsin(double x, int n)														/*Arcsin(x) Function*/
{
	if (x == 1)																		/*If x=1 or x=-1, the relsult will be inaccurate because of the limtiation of n(n cannot be infinite in coding program). So, assign a extreme value to accuacy.*/
		return PI / 2;
	else if (x == -1)
		return -PI / 2;

	if (n <= 0)
		return x;
	return ((Fact(2 * n) / (Pow(2, 2 * n) * Pow(Fact(n), 2))) * (Pow(x, 2 * n + 1) / (2 * n + 1)) + Arcsin(x, n - 1));	/*Use Reculsive Function, it means : x + x^3/6! + 3x^5/40 + ~ + (2n)!*(x^(2n+1))/((4^n)*((n!)^2)*(2n+1)) */

}

double Arccos(double x, int n)														/*Arccos(x) Function*/
{
	return PI / 2 - Arcsin(x, n);													/*Arccos(x) = pi/2 - Arcsin(x)*/
}

double Arctan1(double x, int n)														/*Arctan(x) Function (-1<= x <=1)*/
{
	if (n <= 0)
		return x;
	return ((Pow(-1, n) * Pow(x, 2 * n + 1)) / (2 * n + 1) + Arctan1(x, n - 1));	/*Use Reculsive Function, it means : x - x^3/3 + x^5/5 - ~ + ((-1)^n)*(x^(2n+1))/(2n+1) (Using Tailor Series) */
}

double Arctan2(double x, int n)														/*Arctan(x) Function (x>1 or x<-1), Latter, if x>1, Plus pi/2. if x<-1. Plus -pi/2*/
{
	if (n <= 0)
		return 1 / x;
	return -(Pow(-1, n) / ((2 * n + 1) * Pow(x, 2 * n + 1)) + Arctan2(x, n - 1));	/*Use Reculsive Function, it means : -1/x + 1/3x^3 - 1/5x^5 + ~ + ((-1)^n)/((2n+1)*(x^(2n+1)) (Using Tailor Series) */
}

float Ex(float x, int n)															/*e^x Function*/
{
	if (n <= 0)
		return 1;
	return Pow(x, n) / Fact(n) + Ex(x, n - 1);										/*Use Reculsive Function, it means : 1 + x + x^2/2 + ~ + x^n (Using Tailor Series) */
}

float Lnx(float x, int n)															/*lnx Function*/
{
	if (n <= 1)
		return (x - 1) / (x + 1);
	return (Pow((x - 1) / (x + 1), 2 * n - 1) / (2 * n - 1) + Lnx(x, n - 1));		/*Use Reculsive Function, it means : (x-1)/(x+1) + (1/3)*((x-1)/(x+1))^3 + (1/5)*((x-1)/(x+1))^5 + ~ + ((x-1)/(x+1))^(2n-1))/(2n-1) (Using Tailor Series), lnx = multiple 2 to this return */
}

float Pow2(float x, float y, float n)												/*x^(1/y) Function*/
{
	return Ex(2 * Lnx(x, n) / y, n);												/*it means : x^(1/y) = a = e^(lnx/y)*/
}

/*Finish Defining Functions*/

int main()
{
	int select;

Menu:																				/*Make Menu Label for goto branch statement, if input is wrong*/

	printf("input your desired function\n");
	printf("1. cos(x)\n2. sin(x)\n3. tan(x)\n4. acos(x)\n5. asin(x)\n6. atan(x)\n7. x^y\n8. x^(1/y)\n9. e^x\n10. loge(x)\n");
	Line();																			/*Use Printing Line function*/
	scanf_s("%d", &select);
	Line();

	if (select == 1)																/*Use if - else if statement for selecting function, Cos(x)*/
	{
		int type;																	/*Use variable for selecting function type*/
		double degree, radian, gradian;

		printf("Cos(x) has been chosen\n");

	Try1:																			/*Make Try1 Label for goto branch statement, if input is wrong*/
		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		Line();
		scanf_s("%d", &type);
		Line();

		if (type == 1)																/*Choice the type of function*/
		{
			printf("Input Your Desired Degree Value\n");
			Line();
			scanf_s("%lf", &degree);												/*The type of data is double, so we use lf*/
			Line();
			printf("Cos(%.4f) = %.4f\n", degree, Cos(Radian(degree), 200));			/*Use Cos(x) function. In Defined function, We have to assign n to recursion*/
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			Line();
			scanf_s("%lf", &radian);
			Line();
			printf("Cos(%.4f) = %.4f\n", radian, Cos((radian), 200));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			Line();
			scanf_s("%lf", &gradian);
			Line();
			printf("Cos(%.4f) = %.4f\n", gradian, Cos(Gradian(gradian), 200));
		}

		else
		{
			InputError();															/*Use Printing InputError Function*/
			goto Try1;																/*Use goto statement to re-select the type*/
		}
	}

	else if (select == 2)															/*Sin(x)*/
	{
		int type;
		double degree, radian, gradian;

		printf("Sin(x) has been chosen\n");

	Try2:																			/*Make Try2 Label for goto branch statement, if input is wrong*/

		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		Line();
		scanf_s("%d", &type);
		Line();

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			Line();
			scanf_s("%lf", &degree);
			Line();
			printf("Sin(%.4f) = %.4f\n", degree, Sin(Radian(degree), 50));			/*Use Sin(x) function. In Defined function, We have to assign n to recursion*/
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			Line();
			scanf_s("%lf", &radian);
			Line();
			printf("Sin(%.4f) = %f\n", radian, Sin((radian), 100));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			Line();
			scanf_s("%lf", &gradian);
			Line();
			printf("Sin(%.4f) = %.4f\n", gradian, Sin(Gradian(gradian), 100));
		}

		else
		{
			InputError();
			goto Try2;
		}
	}

	else if (select == 3)															/*Tan(x)*/
	{
		int type;
		double degree, radian, gradian;

		printf("Tan(x) has been chosen\n");

	Try3:

		printf("Input Your Desired Angle Type\n1)Degrees\n2)Radians\n3)Gradian\n");
		Line();
		scanf_s("%d", &type);
		Line();

		if (type == 1)
		{
			printf("Input Your Desired Degree Value\n");
			Line();
			scanf_s("%lf", &degree);
			Line();
			printf("Tan(%.4f) = %.4f\n", degree, Tan(Radian(degree), 100));			/*Use Tan(x) function. In Defined function, We have to assign n to recursion*/
		}

		else if (type == 2)
		{
			printf("Input Your Desired Radian Value\n");
			Line();
			scanf_s("%lf", &radian);
			Line();
			printf("Tan(%.4f) = %.4f\n", radian, Tan((radian), 100));
		}

		else if (type == 3)
		{
			printf("Input Your Desired Gradian Value\n");
			Line();
			scanf_s("%lf", &gradian);
			Line();
			printf("Tan(%.4f) = %.4f\n", gradian, Tan(Gradian(gradian), 100));
		}

		else
		{
			InputError();
			goto Try3;
		}
	}

	else if (select == 4)															/*Arccos(x)*/
	{
		double x, degree, gradian;													/*x means the varialbe value, user want to input*/

		printf("Arccos(x) has been chosen\n");

	Try4:

		printf("Input Your Desired Value(-1<= Value <=1)\n");						/*Arccos(x) is defined the range of -1<= x <= 1*/
		Line();
		scanf_s("%lf", &x);
		Line();

		if (x > 1 | x < -1)															/*If the x is out of range, user has to re-select*/
		{
			InputError();
			goto Try4;
		}

		degree = 180 * Arccos(x, 80) / PI;											/*Convert Radian to Degree*/
		gradian = degree * GRADIAN;													/*Convert Degree to Gradian*/
		printf("Arccos(%.4f) = %.4f in Degree\nArccos(%.4f) = %.4f in Radian\nArccos(%.4f) = %.4f in Gradian", x, degree, x, Arccos(x, 80), x, gradian);	/*Use Arccos(x) function.In Defined function, We have to assign n to recursion */
	}

	else if (select == 5)
	{
		double x, degree, gradian;

		printf("Arcsin(x) has been chosen\n");

	Try5:

		printf("Input Your Desired Degree Value(-1<= Value <=1)\n");
		Line();
		scanf_s("%lf", &x);
		Line();

		if (x > 1 | x < -1)															/*If the x is out of range, user has to re-select*/
		{
			InputError();
			goto Try5;
		}

		degree = 180 * Arcsin(x, 80) / PI;											/*Convert Radian to Degree*/
		if (x < 0)
			degree = 360 + 180 * Arcsin(x, 80) / PI;

		gradian = degree * GRADIAN;													/*Convert Degree to Gradian*/

		printf("Arcsin(%.4f) = %.4f in Degree\nArcsin(%.4f) = %.4f in Radian\nArcsin(%.4f) = %.4f in Gradian", x, degree, x, Arcsin(x, 80), x, gradian);	/*Use Arcsin(x) function.In Defined function, We have to assign n to recursion */
	}

	else if (select == 6)															/*Arctan(x)*/
	{
		double x, degree, gradian;

		printf("Arctan(x) has been chosen\n");
		printf("Input Your Desired Value\n");
		Line();
		scanf_s("%lf", &x);
		Line();


		if (x < -1)																	/*Divide in 3 case by the range of x*/
		{
			degree = 180 * (-PI / 2 - Arctan2(x, 1000)) / PI;							/*Convert Radian to Degree*/
			gradian = degree * GRADIAN;												/*Convert Degree to Gradian*/
			printf("Arctan(%.4f) = %.4f in Degree\nArctan(%.4f) = %.4f in Radian\nArctan(%.4f) = %.4f in Gradian", x, degree, x, -PI / 2 - Arctan2(x, 80), x, gradian);	/*In case x < -1, should plus -pi/2 to Arctan2(Defined function in advance)*/

		}

		else if (x > 1)
		{
			degree = 180 * (PI / 2 - Arctan2(x, 1000)) / PI;
			gradian = degree * GRADIAN;
			printf("Arctan(%.4f) = %.4f in Degree\nArctan(%.4f) = %.4f in Radian\nArctan(%.4f) = %.4f in Gradian", x, degree, x, PI / 2 - Arctan2(x, 10), x, gradian);	/*In case x > 1, should plus pi/2 to Arctan2(Defined function in advance)*/
		}

		else
		{
			degree = 180 * Arctan1(x, 2100) / PI;
			gradian = degree * GRADIAN;
			printf("Arctan(%.4f) = %.4f in Degree\nArctan(%.4f) = %.4f in Radian\nArctan(%.4f) = %.4f in Gradian", x, degree, x, Arctan1(x, 80), x, gradian);			/*In case -1 <= x <= 1, use Arctan1(Defined function in advance)*/
		}
	}

	else if (select == 7)															/*x^y*/
	{
		float x, y;																	/*Latter to classify y to integer, firstly assign y as float data*/	
	
		printf("x^y has been chosen\n");

	Try6:

		printf("input two numbers x and y (y should be integer)\n");
		Line();
		scanf_s("%f %f", &x, &y);
		Line();

		if (y - (int)y != 0)														/*If y is float, y - (int)y != 0. (Ex. 2.3 - 2 = 0.3 != 0) */
		{
			InputError();															/*If y is not an integer, user has to re-select*/
			goto Try6;
		}

		else
		{
			if (y >= 0)																/*Divide case by the sign of y*/
				printf("%.3f^%.f = %.3f", x, y, Pow(x, y));							/*Use Pow function when x^y*/
			else
				printf("%.3f^%.f = %.3f", x, y, Pow1(x, y));						/*Use Pow1 function when x^(-y)*/
		}
	}

	else if (select == 8)															/*x^(1/y)*/
	{
		float x, y;																	/*Latter to classify y to integer, firstly assign y as float data*/	
		
		printf("x^(1/y) has been chosen\n");

	Try7:

		printf("input two numbers x and y (y should be integer)\n");
		Line();
		scanf_s("%f %f", &x, &y);
		Line();

		if (y - (int)y != 0)														/*If y is float, y - (int)y != 0. (Ex. 2.3 - 2 = 0.3 != 0) */
		{
			InputError();															/*If y is not an integer, user has to re-select*/
			goto Try7;
		}

		else
			printf("%.3f^(1/%.f) = %.3f", x, y, Pow2(x, y, 10));					/*Use Pow2 function*/
	}

	else if (select == 9)															/*e^x*/
	{
		float x;
		
		printf("e^x has been chosen\n");
		printf("input the x \n");
		Line();
		scanf_s("%f", &x);
		Line();
		printf("e^%.4f = %.4f", x, Ex(x, 200));										/*Use Ex function. In Defined function, We have to assign n to recursion */
	}

	else if (select == 10)															/*lnx*/
	{
		float x;
		
		printf("logex has been chosen\n");
		printf("Input the x\n");
		Line();
		scanf_s("%f", &x);
		Line();
		printf("loge%.3f = %.3f", x, 2 * Lnx(x, 400));								/*Use Lnx function. In Defined function, We have to assign n to recursion */
	}

	else
	{
		InputError();																/*If user input the worng, has to reselct*/
		goto Menu;
	}

}