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
//void swap(char* a, char* b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Permutation(char* string, int a, int length)
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
//	}
//}
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
//	Permutation(string, 0, length - 1);
//}
/*-------------------------------------------------------Practice 4-------------------------------------------------------*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//main()
//{
//    int i, j, k, c, space = 0, length_text, count = 0, count2 = 0, string[100];
//    char words[100][100] = { 0 }, words2[100][100];
//    char* text = malloc(sizeof(char) * 500);
//
//    k = 0;
//    printf("input the text\n");
//
//    gets_s(text, strlen(text));
//    length_text = strlen(text);
//
//    for (i = 0; text[i] != '\0'; i++)
//    {
//        text[i] = tolower(text[i]);
//    }
//
//    for (i = 0; i < length_text; i++)
//    {
//        if ((text[i] == ' ') || (text[i] == ',' && text[i + 1] == ' ') || (text[i] == '.'))
//        {
//            space++;
//        }
//    }
//
//    for (i = 0; i < length_text; i++)
//    {
//        for (j = 0; j < length_text; j++)
//        {
//            if ((text[k] == ' ') || (text[k] == ',') || (text[k] == '.'))
//            {
//                k++;
//                words[i][j] = '\0';
//                break;
//            }
//
//            else
//            {
//                words[i][j] = text[k];
//                k++;
//            }
//        }
//    }
//
//    k = 0;
//
//    for (i = 0; i <= space; i++)
//    {
//        for (j = 0; j <= space; j++)
//        {
//            if (i == j)
//            {
//                strcpy(words2[k], words[i]);
//                k++;
//                count++;
//
//                break;
//            }
//            else
//            {
//                if (strcmp(words2[j], words[i]) != 0)
//                    continue;
//                else
//                    break;
//            }
//        }
//    }
//
//    for (c = 'a'; c <= 'z'; c++)
//    {
//        (char)c;
//        for (i = 0; i < count; i++)
//        {
//            if (words2[i][0] == c)
//            {
//                for (j = 0; j <= space; j++)
//                {
//                    if (strcmp(words2[i], words[j]) == 0)
//                        count2++;
//                }
//                printf("%s : %d \n", words2[i], count2);
//                count2 = 0;
//            }
//        }
//    }
//}