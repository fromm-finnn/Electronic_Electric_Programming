/*---------------------------------------------Practice 1---------------------------------------------*/

//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int* n, * i, * swapping_value;
//	int N, I, Swapping_value;
//
//	i = &I;
//	n = &N;
//	swapping_value = &Swapping_value;
//
//	printf("Input 'n' to make n*n array\n");
//	scanf_s("%d", &*n);
//
//	int* Array = malloc(sizeof(int) * *n);
//	int* Array2 = malloc(sizeof(int) * *n);
//
//
//	for (*i = 0; *i < *n; (*i)++)
//	{
//		printf("Input the value of array[%d]\n", *i);
//		scanf_s("%d", Array + *i);
//	}
//
//	for (*i = 0; *i < *n; (*i)++)
//	{
//		Array2[*i] = Array[*i];
//	}
//	printf("Input the swapping value : ");
//	scanf_s("%d", &*swapping_value);
//
//	for (*i = 0; *i < *swapping_value; (*i)++)
//	{
//		Array[*i] = Array2[*i + (*n - *swapping_value)];
//		
//	}
//
//	for (*i = *swapping_value; *i < *n; (*i)++)
//	{
//		Array[*i] = Array2[*i - *swapping_value];
//	}
//
//	for (*i = 0; *i < *n; (*i)++)
//	{
//		printf("%d", Array[*i]);
//	}
//	
//	free(Array);
//}

/*---------------------------------------------Practice 2---------------------------------------------*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//main()
//{
//	int n1, n2;
//
//	printf("Input n1\n");
//	scanf_s("%d", &n1);
//
//	printf("Input n2\n");
//	scanf_s("%d", &n2);
//
//	char* array1 = malloc(sizeof(char) * n1);
//	char* array2 = malloc(sizeof(char) * n2);
//	char* array3 = malloc(sizeof(char) * (strlen(array1) + strlen(array2)));
//
//	getchar();
//
//	printf("Input the string1\n");
//	gets(array1);
//	
//	
//	printf("Input the string2\n");
//	gets(array2);
//
//	strcpy(array3, array1);
//	strcat(array3, array2);
//
//	printf("\n%s", array3);
//
//}
