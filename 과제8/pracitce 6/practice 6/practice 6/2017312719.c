/*-----------------------------------------PRACTICE 1-----------------------------------------*/

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//
//
//main()
//{
//	int i;
//	int count[300] = { 0 };
//	char string[100];
//
//	printf("Enter a string : ");
//	gets(string);
//
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		string[i] = tolower(string[i]);
//	}
//
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		count[string[i]]++;
//	}
//	
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		if (count[i] > 0)
//			printf("%c : %d\n", i, count[i]);
//	}
//}

/*-----------------------------------------PRACTICE 2-----------------------------------------*/
//
//#include <stdio.h>
//
//void next(int knight, int i)
//{
//	int next;
//
//	next = knight + i;
//
//	if (next / 10 >= 1 && next / 10 <= 8 && next % 10 >= 1 && next % 10 <= 8)
//	{
//		char a = next / 10 + 96;
//		int b = next % 10 ;
//
//		printf("%c%d ", a, b);
//	}
//
//}
//
//main()
//{
//	int i, j, row, column, knight;
//	int chess[8][8] = { 0 };
//
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			chess[i][j] = 10 * (i + 1) + j + 1;
//		}
//	}
//
//	printf("Input the current position of the Knight\n");
//	printf("Letter? (a to z) \n");
//	row = getchar();
//	row = row - 97;
//	printf("Number? (1 to 8) \n");
//	scanf_s("%d", &column);
//	column = column - 1;
//
//	knight = chess[row][column];
//
//	printf("The Possible moves of Knight : ");
//
//	next(knight, -21);
//	next(knight, -19);
//	next(knight, -12);
//	next(knight, -8);
//	next(knight, 8);
//	next(knight, 12);
//	next(knight, 19);
//	next(knight, 21);
//	
//}
//
/*-----------------------------------------PRACTICE 3-----------------------------------------*/
//#include <stdio.h>
//
//main()
//{
//	int length, move, n, i, matrix[100][100] = {0};
//	int row = 0, column = -1;
//
//	n = 1;
//
//	printf("Input the the square matrix's length of side : ");
//	scanf_s("%d", &length);
//
//	move = length;
//
//	while (move > 0)
//	{
//		for (i = 0; i < move; i++)      /* 0 1 2 3 4 / 5*/
//		{
//			column++;
//			matrix[row][column] = n++;		
//		}
//
//		move--;
//		for (i = 0; i < move; i++)
//		{
//			row++;
//			matrix[row][column] = n++;
//
//		}
//
//		for (i = 0; i < move; i++)
//		{
//			column--;
//			matrix[row][column] = n++;
//
//		}
//
//		move--;
//		for (i = 0; i < move; i++)
//		{
//			row--;
//			matrix[row][column] = n++;
//
//		}
//	}
//
//	for (i = 0; i < length; i++)
//	{
//		for (int j = 0; j < length; j++)
//		{
//			printf("%d	", matrix[i][j]);
//		}
//		printf("\n");
//	}
//}