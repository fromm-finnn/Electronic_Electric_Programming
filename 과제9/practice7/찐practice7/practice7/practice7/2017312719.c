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
//	Permutation(string, 0, length - 1);
//}
/*-------------------------------------------------------Practice 4-------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main()
{
    int i, j, k, space = 0 , length_text, count[100] = { 0 };
    char c, words[100][100] = { 0 };
    char* text = malloc(sizeof(char) * 500);

    k = 0;
    printf("input the text\n");

    gets_s(text, strlen(text));
    length_text = strlen(text);


    for (i = 0; i < 100; i++)
    {
        count[i] = 1;
    }
    
        for (i = 0; i < length_text; i++)
    {
        if ((text[i] == ' ') || (text[i] == ',' && text[i + 1] == ' ') || (text[i] == '.'))
        {
            space++;
        }
    }

    for (i = 0; i < length_text; i++)
    {
        for (j = 0; j < length_text; j++)
        {
            if ((text[k] == ' ') || (text[k] == ',') || (text[k] == '.'))
            {
                k++;
                words[i][j] = '\0';
                break;
            }


            else
            {
                words[i][j] = text[k];
                k++;
            }


        }
    }

    /*
    for (i = 0; i < space; i++)
    {
        k = i;
     
        for (j = k + 1; j < space; k++)
        {
            if (words[i][0] == '.')
                break;

            else
            {
                if (strcmp(words[i], words[j]) == 0)
                {
                    words[j][0] = '.';
                    count[i] ++;
                }
            }

        }
    }*/

    printf("%d", count[1]);

 /*   for (c = 'a'; c <= 'z'; c++)
    {
        for (j = 0; j <= words[i] == '\0'; j++)
        {
            if (words[j][0] == c)
            {
                printf("%s : %d\n", words[j], count[j]);
            }
        }
    }*/

}

/*
기본 생각
1. 문자열을 입력받아. >> Text[]
2. 단어를 구분하기 위해 ' '. ',', '.' 이게 나올때까지 배열에 단어를 넣어. 그리고 카운트 ++해줘 >> *word1, *word1+i
3. 
4.

*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//    int count = 0, c = 0, i, j = 0, k, space = 0;
//
//    char str[100], p[50][100], str1[20], ptr1[50][100];
//
//    char* ptr;
//
//    printf("Enter the string\n");
//    gets(str, strlen(str));
//
//    printf("string length is %d\n", strlen(str));
//
//    for (i = 0; i < strlen(str); i++)
//    {
//        if ((str[i] == ' ') || (str[i] == ',' && str[i + 1] == ' ') || (str[i] == '.'))
//        {
//            space++;
//        }
//    }
//
//    for (i = 0, j = 0, k = 0; j < strlen(str); j++)
//    {
//        if ((str[j] == ' ') || (str[j] == 44) || (str[j] == 46))
//        {
//            p[i][k] = '\0';
//            i++;
//            k = 0;
//        }
//        else
//            p[i][k++] = str[j];
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
//                strcpy(ptr1[k], p[i]);
//                k++;
//                count++;
//
//                break;
//            }
//            else
//            {
//                if (strcmp(ptr1[j], p[i]) != 0)
//                    continue;
//                else
//                    break;
//            }
//        }
//    }
//
//    for (i = 0; i < count; i++)
//    {
//        for (j = 0; j <= space; j++)
//        {
//            if (strcmp(ptr1[i], p[j]) == 0)
//                c++;
//        }
//        printf("%s -> %d times\n", ptr1[i], c);
//        c = 0;
//    }
//}