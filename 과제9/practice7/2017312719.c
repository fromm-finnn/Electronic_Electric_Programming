/*-------------------------------------------------------Practice 1-------------------------------------------------------*/
//#include <stdio.h>
//
//main()
//{
//	int i, j, n, element, matrix[100][100] = { 0 };
//
//	printf("Input the n of nxn matrix(n<100) : ");
//	scanf_s("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("Input the element matrix[%d][%d]\n", i + 1, j + 1);
//			scanf_s("%d", &element);
//			matrix[i][j] = element;
//		}
//	}
//
//	printf("Yout matrix \n");
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d\t", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			matrix[i][j] = 0;
//		}
//	}
//	
//	printf("The upper triangle matrix \n");
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d\t", matrix[i][j]);
//		}
//		printf("\n");
//	}
//}
/*-------------------------------------------------------Practice 2-------------------------------------------------------*/
//#include <stdio.h>
//
//main()
//{
//	int i, stop = 0, count[60] = { 0 };
//	char num[10];
//
//	printf("Input your phone number (Do not input hyphen): ");
//	for (i = 0; i < 10; i++)
//	{
//		num[i] = getchar();
//	}
//
//	/*case1*/
//
//	for (i = 0; i < 8; i++)
//	{
//		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
//		{
//			printf("The phone number is fancy\n");
//			stop = 1;
//			break;
//		}
//	}
//
//	/*case2*/
//	if (stop != 1)
//	{
//		for (i = 0; i < 8; i++)
//		{
//			if ((num[i] + 1 == num[i + 1] && num[i + 1] + 1 == num[i + 2]) || (num[i] == num[i + 1] + 1 && num[i + 1] == num[i + 2] + 1))
//			{
//				printf("The phone number is fancy\n");
//				stop = 1;
//				break;
//			}
//		}
//	}
//	/*case3*/
//
//	if (stop != 1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			count[num[i]]++;
//		}
//
//		for (i = '1'; i <= '9'; i++)
//		{
//			if (count[i] >= 4)
//			{
//				printf("The phone number is fancy");
//				stop = 1;
//				break;
//			}
//		}
//	}
//
//	if (stop != 1)
//		printf("The phone number is not fancy!");
//}
/*-------------------------------------------------------Practice 3-------------------------------------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void swap(char *a, char *b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Permutation(char *string,int a, int length)
//{
//	int i;
//
//	if (a == length)
//	{
//		printf("%s\n", string);
//	}
//
//	else
//	{
//		for (i = a; i <= length; i++)
//		{
//			swap((string + a), (string + i));
//			Permutation(string, a + 1, length);
//			swap((string + a), (string + i));
//		}
//
//	}
//	
//}
//
//
//main()
//{
//	char string[100] = { 0 };
//	int length;
//
//	printf("Input the string :");
//	scanf("%s", string);
//	length = strlen(string);
//
//	Permutation(string, 0, length-1);
//}
/*-------------------------------------------------------Practice 4-------------------------------------------------------*/

#include <stdio.h>

main()
{
	char text[]

	printf("Input the text\n");
}