//#include <stdio.h>
//
//main()
//{
//	char answer;
//	printf("Would you like to know my name?\n");
//
//	printf("Type Y for YES and N for NO: ");
//	answer = getchar();
//	if (answer == 'Y' || answer == 'y')
//		printf("\n\nMy name is BUSY BEE\n");
//	else
//		printf("\n\nYou are good for nothing\n");
//}
//
//
//#include <stdio.h>
//#include <ctype.h>
//
//main()
//{
//	char character;
//	printf("Press any key\n");
//	character = getchar();
//	if (isalpha(character) > 0)
//		printf("The character is a letter.");
//	else
//		if (isdigit(character) > 0)
//			printf("The Character is a digit.");
//		else
//			printf("The Character is not a alphanumeric");
//}
//
//#include <stdio.h>
//#include <ctype.h>
//
//main()
//{
//	char alphabet;
//	printf("Enter an alphabet");
//	putchar('\n');
//	alphabet = getchar();
//	if (islower(alphabet))
//		putchar(toupper(alphabet));
//	else
//		putchar(tolower(alphabet));
//}
//
//#include <stdio.h>
//
//main()
//{
//	int a, b, c, x, y, z;
//	int p, q, r;
//
//	printf("Enter three	integer numbers\n");
//	scanf_s("%d %*d %d", &a, &b, &c);
//	printf("%d %d %d \n\n", a, b, c);
//	printf("Enter two 4-digit numbers\n");
//	scanf_s("%2d %4d", &x, &y);
//	printf("%d %d\n\n", x, y);
//	printf("Enter two Integers\n");
//	scanf_s("%d %d", &a, &x);
//	printf("%d %d \n\n", a, x);
//	printf("Enter a nine digit number\n");
//	scanf_s("%3d %4d %3d", &p, &q, &r);
//	printf("%d %d %d \n\n", p, q, r);
//	printf("Enter two three digit numbers\n");
//	scanf_s("%d %d", &x, &y);
//	printf("%d %d", x, y);
//}
//
//#include <stdio.h>
//
//main()
//{
//	float x, y;
//	double p, q;
//
//	printf("Values of x and y : ");
//	scanf_s("%f %e", &x, &y);
//	printf("\n");
//	printf("x = %f\ny = %f\n\n", x, y);
//
//	printf("Values of p and q: ");
//	scanf_s("%lf %lf", &p, &q);
//	printf("\n\np = %.12lf\np = %.12e", p, q);
////}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//main()
//{
//	int no;
//	char name1[15], name2[15], name3[15];
//	printf("Enter serial number and name one\n");
//	scanf("%d %15c", &no, name1);
//	printf("%d %15s\n\n", no, name1);
//
//	printf("Enter Serial number and name two\n");
//	scanf("%d %s", &no, name2);
//	printf("%d %15s\n\n", no, name2);
//
//	printf("Enter Serial number and name three\n");
//	scanf("%d %15s", &no, name3);
//	printf("%d %15s\n\n", no, name3);
//
//}
//
//#include <stdio.h>
//
//main()
//{
//	char address[80];
//
//	printf("Enter address\n");
//	scanf("%[a-z]", address);
////	printf("%-80s\n\n", address);
////}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//main()
//{
//	char address[80];
//
//	printf("Enter address\n");
//	scanf("%[^\n]", address);
//	printf("%-80s", address);
//}
//
//#include <stdio.h>
//
//main()
//{
//	int a;
//	float b;
//	char c;
//	printf("Enter Values of a, b, and c\n");
//	if (scanf_s("%d %f %c", &a, &b, &c) == 3)
//		printf("a = %d b = %f c = %c\n", a, b, c );
//	else
//		printf("Error in input.\n");
//}
//
//#include <stdio.h>
//
//main()
//{
//	int m = 12345;
//	long n = 987654;
//
//	printf("%d\n", m);
//	printf("%10d\n", m);
//	printf("%010d\n", m);
//	printf("%-10d\n", m);
//	printf("%10ld\n", n);
//	printf("%10ld\n", -n);
//}
//
//#include <stdio.h>
//
//main()
//{
//	float y = 98.7654;
//
//	printf("%7.4f\n", y);
//	printf("%f\n", y);
//	printf("%7.2f\n", y);
//	printf("%-7.2f\n", y);
//	printf("%07.2f\n", y);
//	printf("%*.*f", 7, 2, y);
//	printf("\n");
//	printf("%10.2e\n", y);
//	printf("%12.4e\n", -y);
//	printf("%-10.2e\n", y);
//	printf("%e\n", y);
//}
//
//#include <stdio.h>
//
//main()
//{
//	char x = 'A';
//	char name[20] = "ANIL KUMAR GUPTA";
//
//	printf("OUTPUT OF CHARACTERS \n\n");
//	printf("%c\n%3c\n%5c\n", x, x, x);
//	printf("%3c\n%c\n", x, x);
//	printf("\n");
//	printf("OUTPUT OF STRINGS\n\n");
//	printf("%s\n", name);
//	printf("%20s\n", name);
//	printf("%20.10s\n", name);
//	printf("%.5s\n", name);
//	printf("%-20.10s\n", name);
//	printf("%5s\n", name);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define ITEMS 4
//
//main()
//{
//	int i, quantity[5];
//	float rate[5], value, total_value;
//	char code[5][5];
//
//	i = 1;
//	while (i <= ITEMS)
//	{
//		printf("Enter code, quantity, and rate:");
//		scanf("%s %d %f", code[i], &quantity[i], &rate[i]);
//		i++;
//	}
//
//	printf("\n\n");
//
//	printf("	INVENTORY REPORT	\n");
//	printf("------------------------\n");
//	printf(" Code Quantity Rate Value \n");
//	printf("------------------------\n");
//
//	total_value = 0;
//	i = 1;
//	while (i <= ITEMS)
//	{
//		value = quantity[i] * rate[i];
//		printf("%5s %10d %10.2f %e\n", code[i], quantity[i], rate[i], value);
//		total_value += value;
//		i++;
//	}
//
//	printf("-----------------------\n");
//	printf("	TOTAL VALUE = %e\n", total_value);
//	printf("-----------------------\n");
//}
//
//#include <stdio.h>
//#include <math.h>
//#define LAMBDA 0.001
//
//main()
//{
//	double t;
//	float r;
//	int i, R;
//	for (i = 1; i <= 27; ++i)
//	{
//		printf("--");
//	}
//	printf("\n");
//	for (t = 0; t <= 3000; t += 150)
//	{
//		r = exp(-LAMBDA * t);
//		R = (int)(50 * r + 0.5);
//		printf("|");
//		for (i = 1; i <= R; ++i)
//		{
//			printf("*");
//		}
//		printf("#\n");
//	}
//	for (i = 1; i < 3; ++i)
//	{
//		printf("|\n");
//	}
//}
//#include <stdio.h>
//
//main()
//{
//	char c;
//	printf("\n\n");
//	for (c = 65; c <= 122; c = c + 1)
//	{
//		if (c > 90 && c < 97)
//			continue;
//		printf("|%4d - %c", c, c);
//	}
//	printf("|\n");
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//main()
//{
//	char word1[40], word2[40], word3[40], word4[40];
//
//	printf("Enter text : \n");
//	scanf("%s %s", word1, word2);
//	scanf("%s", word3);
//	scanf("%s", word4);
//
//	printf("\n");
//	printf("word1 = %s\nword2 = %s\n", word1, word2);
//	printf("word3 = %s\nword4 = %s\n", word3, word4);
//}
//
//#include <stdio.h>
//
//main()
//{
//	char line[81], character;
//	int c;
//	c = 0;
//	printf("Enter text. Press <Return> at end\n");
//	do
//	{
//		character = getchar();
//		line[c] = character;
//		c++;
//	}
//	while (character != '\n');
//	c = c - 1;
//	line[c] = '\0';
//	printf("\n%s\n", line);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//main()
//{
//	char string1[80], string2[80];
//	int i;
//
//	printf("Enter a string\n");
//	printf("?");
//
//	scanf("%s", string2);
//	for (i = 0; string2[i] != '\0'; i++)
//		string1[i] = string2[i];
//	string1[i] = '\0';
//
//	printf("\n");
//	printf("%s\n", string1);
//	printf("Number of characters = %d\n", i);
//}

//#include <stdio.h>
//
//main()
//{
//char country[15] = "United Kingdom";
//printf("\n\n");
//printf("*123456789012345*\n");
//printf(" ----- \n");
//printf("%15s\n", country);
//printf("%5s\n", country);
//printf("%15.6s\n", country);
//printf("%-15.6s\n", country);
//printf("%15.0s\n", country);
//printf("%.3s\n", country);
//printf("%s\n", country);
//printf(" ----- \n");
//}
//
//#include <stdio.h>
//
//main()
//{
//	int c, d;
//	char string[] = "CProgramming";
//	printf("\n\n");
//	printf("----------\n");
//	for (c = 0; c <= 11; c++)
//	{
//		d = c + 1;
//		printf("|%-12.*s|\n", d, string);
//	}
//	printf("|----------|\n");
//	for (c = 11; c >= 0; c--)
//	{
//		d = c + 1;
//		printf("|%-12.*s|\n", d, string);
//	}
//	printf("|----------|\n");
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//main()
//{
//	char s1[20], s2[20], s3[20];
//	int x, l1, l2, l3;
//	printf("\n\nEnter two string constants \n");
//	printf("?");
//	scanf("%s %s", s1, s2);
//
//	x = strcmp(s1, s2);
//	if (x != 0)
//	{
//		printf("\n\nStrings are not equal \n");
//		strcat(s1, s2);
//	}
//	else
//		printf("\n\nStrings are equal\n");
//	
//	strcpy(s3, s1);
//	l1 = strlen(s1);
//	l2 = strlen(s2);
//	l3 = strlen(s3);
//	printf("\ns1 = %s\t length = %d characters\n", s1, l1);
//	printf("s2 = %s\t length = %d characters\n", s2, l2);
//	printf("s3 = %s\t length = %d characters\n", s3, l3);
//}
//
//#include <stdio.h>
//
//main()
//{
//	char line[81], ctr;
//	int i, c, end = 0, characters = 0, words = 0, lines = 0;
//
//	printf("KEY IN THE TEXT/\n");
//	printf("GIVE ONE SPACE AFTER EACH WORD.\n");
//	printf("WHEN COMPLETED, PRESS 'RETRURN'.\n\n");
//	while (end == 0)
//	{
//		c = 0;
//		while ((ctr = getchar()) != '\n')
//			line[c++] = ctr;
//		line[c] = '\0';
//
//		if (line[0] == '\0')
//			break;
//		else
//		{
//			words++;
//			for (i = 0; line[i] != '\0'; i++)
//				if (line[i] == ' ' || line[i] == '\t')
//					words++;
//		}
//
//		lines = lines + 1;
//		characters = characters + strlen(line);
//	}
//
//	printf("\n");
//	printf("Number of lines  = %d\n", lines);
//	printf("Number of words = %d\n", words);
//	printf("Number of characters = %d\n", characters);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define CUSTOMERS 10
//
//main()
//{
//	char first_name[20][10], second_name[20][10], surname[20][10], name[20][20], telephone[20][10], dummy[20];
//	int i, j;
//
//	printf("Input names and telephone numbers \n");
//	printf("?");
//
//	for (i = 0; i < CUSTOMERS; i++)
//	{
//		scanf("%s %s %s %s", first_name[i], second_name[i], surname[i], telephone[i]);
//
//		strcpy(name[i], surname[i]);
//		strcat(name[i], ",");
//		dummy[0] = first_name[i][0];
//		dummy[1] = '\0';
//		strcat(name[i], dummy);
//		strcat(name[i], ".");
//		dummy[0] = second_name[i][0];
//		dummy[1] = '\0';
//		strcat(name[i], dummy);
//	}
//
//	for (i = 1; i <= CUSTOMERS - 1; i++)
//		for (j = 1; j <= CUSTOMERS - i; j++)
//			if (strcmp(name[j - 1], name[j]) > 0)
//			{	
//				strcpy(dummy, name[j - 1]);
//				strcpy(name[j - 1], name[j]);
//				strcpy(name[j], dummy);
//
//				strcpy(dummy, telephone[j - 1]);
//				strcpy(telephone[j - 1], telephone[j]);
//				strcpy(telephone[j], dummy);
//			}
//
//	printf("\nCUSTOMERS LIST IN ALPHABETICAL ORDER \n\n");
//	for (i = 0; i < CUSTOMERS; i++)
//	{
//		printf("	%-20s\t %-10s\n", name[i], telephone[i]);
//	}
//}
//
