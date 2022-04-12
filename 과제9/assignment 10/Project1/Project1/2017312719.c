//#include <stdio.h>
//
//main()
//{
//	char a;
//	int x;
//	float p, q;
//
//	a = 'A';
//	x = 125;
//	p = 10.25, q = 18.76;
//	printf("%c is stored at addr %u. \n", a, &a);
//	printf("%d is stored at addr %u. \n", x, &a);
//	printf("%f is stored at addr %u. \n", p, &a);
//	printf("%f is stored at addr %u. \n", q, &a);
//}
//
//#include <stdio.h>
//
//main()
//{
//	int x, y;
//	int* ptr;
//
//	x = 10;
//	ptr = &x;
//	y = *ptr;
//
//	printf("Value of x is %d\n\n", x);
//	printf("%d is stored at addr %u\n", x, &x);
//	printf("%d is stored at addr %u\n", *&x, &x);
//	printf("%d is stored at addr %u\n", *ptr, ptr);
//	printf("%d is stored at addr %u\n", ptr, &ptr);
//	printf("%d is stored at addr %u\n", y, &y);
//	*ptr = 25;
//	printf("\nNow x = %d\n", x);
//}
//
//#include <stdio.h>
//
//main()
//{
//	int a, b, * p1, * p2, x, y, z;
//	a = 12;
//	b = 4;
//	p1 = &a;
//	p2 = &b;
//	x = *p1 * *p2 - 6;
//	y = 4 * -*p2 / *p1 + 10;
//	printf("Address of a = %u\n", p1);
//	printf("Address of b = %u\n", p2);
//	printf("\n");
//	printf("a = %d, b = %d\n", a, b);
//	printf("x = %d, y = %d\n", x, y);
//	*p2 = *p2 + 3;
//	*p1 = *p2 - 5;
//	z = *p1 * *p2 - 6;
//	printf("\na = %d, b = %d,", a, b);
//	printf(" z = %d\n", z);
//}
//
//#include <stdio.h>
//
//main()
//{
//	int* p, sum, i;
//	int x[5] = { 5, 9, 6, 3, 7 };
//	i = 0;
//	p = x;
//	sum = 0;
//	printf("Element	Value	Address\n");
//	while (i < 5)
//	{
//		printf(" x[%d]	%d	%u\n", i, *p, p);
//		sum = sum + *p;
//		i++, p++;
//	}
//	printf("\n Sum		=	%d\n", sum);
//	printf("\n &x[0]		=	%u\n", &x[0]);
//	printf("\n p		=	%u\n", p);
//}
//
//#include <stdio.h>
//
//void exchange(int*, int*);
//main()
//{
//	int x, y;
//	x = 100;
//	y = 200;
//	printf("Before exchange	: x = %d	y = %d\n\n", x, y);
//	exchange(&x, &y);
//	printf("After exchange	: x = %d	y = %d\n\n", x, y);
//}
//exchange(int* a, int* b);
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}

//#include <stdio.h>
//#include <math.h>
//#define PI 3.141592
//double y(double);
//double cos(double);
//double table(double(*f)(), double, double, double);
//
//main()
//{
//	printf("Table of y(x) = 2*x*x-x+1\n\n");
//	table(y, 0.0, 2.0, 0.5);
//	printf("\nTable of cos(x)\n\n");
//	table(cos, 0.0, PI, 0.5);
//}
//double table(double(*f)(), double min, double max, double step)
//{
//	double a, value;
//	for (a = min; a <= max; a += step)
//	{
//		value = (*f)(a);
//		printf("%5.2f %10.4f\n", a, value);
//	}
//}
//double y(double x)
//{
//	return(2 * x * x - x + 1);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct invent
//{
//	char* name[20];
//	int number;
//	float price;
//};
//main()
//{
//	struct invent product[3], *ptr;
//	printf("INPUT\n\n");
//	for (ptr = product; ptr < product + 3; ptr++)
//		scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);
//	printf("\nOUTPUT\n\n");
//	ptr = product;	
//	while (ptr < product + 3)
//	{
//		printf("%-20s %5d %10.2f\n",
//			ptr->name.
//			ptr->number,
//			ptr->price);
//		ptr++;
//	}
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define STUDENTS 5
//#define SUBJECTS 4
//#include <string.h>
//
//main()
//{
//	char name[STUDENTS][20];
//	int marks[STUDENTS][SUBJECTS + 1];
//
//	printf("Input students names & their marks in four subjects\n");
//	get_list(name, marks, STUDENTS, SUBJECTS);
//	get_sum(marks, STUDENTS, SUBJECTS + 1);
//	printf("\n");
//	print_list(name, marks, STUDENTS, SUBJECTS + 1);
//	get_rank_list(name, marks, STUDENTS, SUBJECTS + 1);
//	printf("\nRanked List\n");
//	print_list(name, marks, STUDENTS, SUBJECTS + 1);
//}
//
//get_list(char *string [], int array[][SUBJECTS + 1], int m, int n)
//{
//	int i, j, (*rowptr)[SUBJECTS + 1] = array;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%s", string[i]);
//		for (j = 0; j < SUBJECTS; j++)
//			scanf("%d", &(*(rowptr + i))[j]);
//	}
//}
//
//get_sum(int array[][SUBJECTS + 1], int m, int n)
//{
//	int i, j, (*rowptr)[SUBJECTS + 1] = array;
//	for (i = 0; i < m; i++)
//	{
//		(*(rowptr + i))[n - 1] = 0;
//		for (j = 0; j < n - 1; j++)
//			(*(rowptr + i))[n - 1] += (*(rowptr + i))[j];
//	}
//}
//
//get_rank_list(char* string[], int array[][SUBJECTS + 1], int m, int n)
//{
//	int i, j, k, (*rowptr)[SUBJECTS + 1] = array;
//	char* temp;
//
//	for (i = 1; i <= m - 1; i++)
//		for (j = 1; j <= m - i; j++)
//			if ((*(rowptr + j - 1))[n - 1] < (*(rowptr + j))[n - 1])
//			{
//				swap_string(string[j - 1], string[j]);
//
//				for (k = 0; k < n; k++)
//					swap_int(&(*(rowptr + j - 1))[k], &(*(rowptr + j))[k]);
//			}
//}
//
//print_list(char* string[], int array[][SUBJECTS + 1], int m, int n)
//{
//	int i, j, (*rowptr)[SUBJECTS + 1] = array;
//	for (i = 0; i < m; i++)
//	{
//		printf("%-20s", string[i]);
//		for (j = 0; j < n; j++)
//			printf("%5d", (*(rowptr + i))[j]);
//		printf("\n");
//	}
//}
//
//swap_int(int* p, int* q)
//{
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//swap_string(char s1[], char s2[])
//{
//	char swaparea[256];
//	int i;
//	for (i = 0; i < 256; i++)
//		swaparea[i] = '\0';
//	i = 0;
//	while (s1[i] != '\0' && i < 256)
//	{
//		swaparea[i] = s1[i];
//		i++;
//	}
//	i = 0;
//	while (s2[i] != '\0' && i < 256)
//	{
//		s1[i] = s2[i];
//		s1[++i] = '\0';
//	}
//	i = 0;
//	while (swaparea[i] != '\0')
//	{
//		s2[i] = swaparea[i];
//		s2[++i] = '\0';
//	}
//}

//#define _CRT_NO_SECURE_WARNINGS
//#include <stdio.h>
//
//struct stores
//{
//	char name[20];
//	float price;
//	int quantity;
//};
//
//main()
//{
//	void update(struct stores*, float, int);
//	float p_increment, value;
//	int q_increment;
//
//	struct stores item = { "XYZ", 25.75,12};
//	struct stores *ptr = &item;
//
//	printf("\nInput increment values : ");
//	printf("price increment and quantity increment\n");
//	scanf_s("%f %d", &p_increment, &q_increment);
//
//	update(&item, p_increment, q_increment);
//
//	printf("Update values of item\n\n");
//	printf("Name : %s\n", ptr->name);
//	printf("Price : %f\n", ptr->price);
//	printf("Quantity : %d\n", ptr->quantity);
//
//	value = mul(&item);
//
//	printf("\nValue of the item = %f\n", value);
//}
//
//void update(struct stores *product, float p, int q)
//{
//	product->price += p;
//	product->quantity += q;
//}
//
//float mul(struct stores *stock)
//{
//	return(stock->price * stock->quantity);
//}