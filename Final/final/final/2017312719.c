#define _CRT_SECURE_NO_WARNINGS															//To use fopen() function in VS
#include <stdio.h>
#include <windows.h>																	//To use system("csl") for new screen
#include <string.h>																		//To use strcmp for student screen	

struct student																			//values of math, and science tests
{
	int mid, project, final, total;													
	char id[10], name[5], grade;
	double percentage;
};

main()
{
	FILE* fp1, * fp2, *fp3;																//File values. I will use fp1 - math, fp2 - science, fp3 - result
	char name1[20], name2[20];															//name1,2 - file name
	char login, p;																		//(login - Student screen / Professor screen) ( p - severarl choosing) 
	char mathline[33], scienceline[33], resultline[100], identify[10];					//(lines - To read lines of files) (identify - Variable of student id or name)
	int i, C = 0, j = 0, k;																//(i,j - for statemaent) (C -  Calculate number) (k - check student input)
	float MIN_A, MIN_B, MIN_C, MIN_D;													//Variables of MIN Values
	struct student math;
	struct student science;
	
	math.percentage = 0;																
	science.percentage = 0;																//inital values of percentage

Welcome:																				//Welcome Screen
	system("cls");																		//New screen

Retry1:																					
	printf("Enter first file name e.g Math.txt : ");
	scanf("%s", name1);

	fp1 = fopen(name1, "r");
	if (fp1 == NULL)	
	{
		printf("File isn't uploaded please try again\n");
		goto Retry1;
	}																					//If name1 is not math.txt -> fp1 will be NULL -> Try again 
	else
		printf("First file uploaded succesfully\n\n");									//if name1 is math.txt -> uploaded	
	
	
Retry2:
	printf("Enter first file name e.g Science.txt : ");
	scanf("%s", name2);

	fp2 = fopen(name2, "r");

	if (fp2 == NULL)
	{
		printf("File isn't uploaded please try again");
		goto Retry2;
	}

	else
		printf("First file uploaded succesfully");


Main:																					//Main Screen

	system("cls");

	printf("Welcome to final Exam\n\n"
		"Global Inputs\n"
		"B for Back\n"
		"E for Exit\n"
		"M for main.\n"
		"Meaning of Global Inputs is you can Enter these option at any time in whole project\n"
		"even they are not printed on console\n"
		"Except where mention to enter specific data type input\n\n"
		"Pleses Press\n"
		"P for Prefessor\n"
		"S for Student\n");

Retry3:
	getchar();
	login = getchar();

	if (login == 'P' || login == 'p')
	{
	Professor:																			//Professor Screen
		system("cls");
		
		printf("Plese Press\n"
			"S for Show All Records\n"
			"C for Calculate the Final Grades\n");

	Retry4:

		getchar();
		p = getchar();

		if (p == 'S' || p == 's')
		{
			system("cls");
			
			if (C > 0)																	//If professor alreay calcuate the score -> open result file
			{
				fp3 = fopen("result.txt", "r");
				
				while ((fgets(resultline, 100, fp3)) != NULL)							
					printf("%s", resultline);											//read all lines in result file, and show at once
				fclose(fp3);

				printf("Input B/M/E");													//After check the score -> user can select actions.
				
			Retry6:

				getchar();
				p = getchar();
			
				if (p == 'M' || p == 'm')
				goto Main;

				else if (p == 'B' || p == 'b')
				goto Professor;

				else if (p == 'E' || p == 'e')
				system("payse");
			
				else
				{
					printf("Wrong Input! Retry\n");
					goto Retry6;

				}
			}

			for(i=0 ; i<=2; i++)														//Read first 3 lines of file and print them
			{
				fgets(mathline, sizeof(mathline),fp1);
				printf("%s", mathline);
			}

			fgets(mathline, sizeof(mathline), fp1);										//Read fourth line and print
			printf("%s	Percentage	Grade\n",mathline);

			for(i=0; i<=9; i++)															//Read and save each values following line by line -> show theme at once by for statement
			{
				fscanf(fp1, "%s	%s	%d	%d	%d	%d", math.id, math.name, &math.mid, &math.project, &math.final, &math.total);
				printf("%s	%s	%d	%d	%d	%d	%f\n", math.id, math.name, math.mid, math.project, math.final, math.total, math.percentage);	//There is no grade before calculating
			}
			
			printf("\n\n");
			
			
			for (i = 0; i <= 2; i++)
			{
				fgets(scienceline, sizeof(scienceline), fp2);
				printf("%s", scienceline);
			}

			fgets(scienceline, sizeof(scienceline), fp2);
			printf("%s	Percentage	Grade\n", scienceline);

			for (i = 0; i <= 9; i++)
			{
				fscanf(fp2, "%s	%s	%d	%d	%d	%d", science.id, science.name, &science.mid, &science.project, &science.final, &science.total);
				printf("%s	%s	%d	%d	%d	%d	%f\n", science.id, science.name, science.mid, science.project, science.final, science.total, science.percentage);
			}

			fseek(fp1, 0, SEEK_SET);													//For After reading -> pointer will go to fisrt 0byte of file
			fseek(fp2, 0, SEEK_SET);

			printf("\nInput B/M/E\n");
			
		Retry5:
			getchar();
			p = getchar();
			if (p == 'B' || p == 'b')
				goto Professor;
			else if (p == 'M' || p == 'm')
				goto Main;
			else if (p == 'E' || p == 'e')
				system("pause");
			else
			{
				printf("Wrong Input! Retry\n");
				goto Retry5;
			}
		}

		else if (p == 'C' || p == 'c')
		{
			system("cls");		

			printf("IMPORTANT : Please enter only intger values and else enter the MIN Value of each Grade\n"
				"E.G : Only those students will get Grade A whose percentage is greater than 90 percent\n"
				"then enter 90 for grade A Default Grading Policy\n"
				"Percentage >= 90 then A\n"
				"Percentage >= 80 then B\n"
				"Percentage >= 70 then C\n"
				"Percentage >= 60 then D\n"
				"Percentage < 60 then F\n");
		Retry7:

			printf("Please Enter Percentage for Grade A ");
			scanf("%f", &MIN_A);
			if ((MIN_A - (int)MIN_A) != 0)												//If MIN Value is float -> the equation will not 0						
			{
				printf("You should input intger. Try agian\n");	
				goto Retry7;
			}

			printf("Please Enter Percentage for Grade B ");
			scanf("%f", &MIN_B);
			if (MIN_B - (int)MIN_B != 0)
			{
				printf("You should input intger. Try agian\n");
				goto Retry7;
			}
			printf("Please Enter Percentage for Grade C ");
			scanf("%f", &MIN_C);
			if (MIN_C - (int)MIN_C != 0)
			{
				printf("You should input intger. Try agian\n");
				goto Retry7;
			}

			printf("Please Enter Percentage for Grade D ");
			scanf("%f", &MIN_D);
			if (MIN_D - (int)MIN_D != 0)
			{
				printf("You should input intger. Try agian\n");
				goto Retry7;
			}

			for (i = 0; i <= 2; i++)
			{
				fgets(mathline, sizeof(mathline), fp1);
				printf("%s", mathline);
			}

			fgets(mathline, sizeof(mathline), fp1);
			printf("%s	Percentage	Grade\n", mathline);

			for (i = 0; i <= 9; i++)
			{
				fscanf(fp1, "%s	%s	%d	%d	%d	%d", math.id, math.name, &math.mid, &math.project, &math.final, &math.total);

				math.percentage = math.total/3;
				if (math.percentage >= MIN_A)
					math.grade = 'A';
				else if (math.percentage < MIN_A && math.percentage >= MIN_B)
					math.grade = 'B';
				else if (math.percentage < MIN_B && math.percentage >= MIN_C)
					math.grade = 'C';
				else if (math.percentage < MIN_C && math.percentage >= MIN_D)
					math.grade = 'D';
				else
					math.grade = 'F';

				printf("%s	%s	%d	%d	%d	%d	%f	%c\n", math.id, math.name, math.mid, math.project, math.final, math.total, math.percentage, math.grade);

			}

			printf("\n\n");


			for (i = 0; i <= 2; i++)
			{
				fgets(scienceline, sizeof(scienceline), fp2);
				printf("%s", scienceline);
			}

			fgets(scienceline, sizeof(scienceline), fp2);
			printf("%s	Percentage	Grade\n", scienceline);

			for (i = 0; i <= 9; i++)
			{
				fscanf(fp2, "%s	%s	%d	%d	%d	%d", science.id, science.name, &science.mid, &science.project, &science.final, &science.total);
				science.percentage = science.total / 3;
				if (science.percentage >= MIN_A)
					science.grade = 'A';
				else if (science.percentage < MIN_A && science.percentage >= MIN_B)
					science.grade = 'B';
				else if (science.percentage < MIN_B && science.percentage >= MIN_C)
					science.grade = 'C';
				else if (science.percentage < MIN_C && science.percentage >= MIN_D)
					science.grade = 'D';
				else
					science.grade = 'F';
				printf("%s	%s	%d	%d	%d	%d	%f	%c\n", science.id, science.name, science.mid, science.project, science.final, science.total, science.percentage, science.grade);
			}

			fseek(fp1, 0, SEEK_SET);
			fseek(fp2, 0, SEEK_SET);

			printf("Do you want to Write the Grades in file?\n"
				"Please Press\n"
				"Y for Yes\n"
				"N for No\n");
		
		Retry9:
			getchar();
			p = getchar();
			if (p == 'Y' || p == 'y')
			{
				fp3 = fopen("result.txt", "w");														//create result file, Using w to write new result file everytime

				for (i = 0; i <= 2; i++)
				{
					fgets(mathline, sizeof(mathline), fp1);											//read math file -> write result file line by line 
					fprintf(fp3, "%s", mathline);
				}

				fgets(mathline, sizeof(mathline), fp1);
				fprintf(fp3, "%s	Percentage	Grade\n", mathline);

				for (i = 0; i <= 9; i++)
				{
					fscanf(fp1, "%s	%s	%d	%d	%d	%d", math.id, math.name, &math.mid, &math.project, &math.final, &math.total);

					math.percentage = math.total / 3;
					if (math.percentage >= MIN_A)
						math.grade = 'A';
					else if (math.percentage < MIN_A && math.percentage >= MIN_B)
						math.grade = 'B';
					else if (math.percentage < MIN_B && math.percentage >= MIN_C)
						math.grade = 'C';
					else if (math.percentage < MIN_C && math.percentage >= MIN_D)
						math.grade = 'D';
					else
						math.grade = 'F';

					fprintf(fp3, "%s	%s	%d	%d	%d	%d	%f	%c\n", math.id, math.name, math.mid, math.project, math.final, math.total, math.percentage, math.grade);

				}

				fprintf(fp3, "\n\n");


				for (i = 0; i <= 2; i++)
				{
					fgets(scienceline, sizeof(scienceline), fp2);
					fprintf(fp3, "%s", scienceline);
				}

				fgets(scienceline, sizeof(scienceline), fp2);
				fprintf(fp3, "%s	Percentage	Grade\n", scienceline);

				for (i = 0; i <= 9; i++)
				{
					fscanf(fp2, "%s	%s	%d	%d	%d	%d", science.id, science.name, &science.mid, &science.project, &science.final, &science.total);
					science.percentage = science.total / 3;
					if (science.percentage >= MIN_A)
						science.grade = 'A';
					else if (science.percentage < MIN_A && science.percentage >= MIN_B)
						science.grade = 'B';
					else if (science.percentage < MIN_B && science.percentage >= MIN_C)
						science.grade = 'C';
					else if (science.percentage < MIN_C && science.percentage >= MIN_D)
						science.grade = 'D';
					else
						science.grade = 'F';
					fprintf(fp3, "%s	%s	%d	%d	%d	%d	%f	%c\n", science.id, science.name, science.mid, science.project, science.final, science.total, science.percentage, science.grade);
				}

				fseek(fp1, 0, SEEK_SET);
				fseek(fp2, 0, SEEK_SET);
				fclose(fp3);
				C++;																				//Atter result file is saved, calculate number plus1
				printf("Input B/M/E");
				
			Retry8:
				getchar();
				p = getchar();

				if (p == 'm' || p == 'M')
					goto Main;

				else if (p == 'b' || p == 'B')
						goto Professor;

				else if (p == 'E' || p == 'e')
					system("pause");

				else
				{
					printf("Wrong Input! Retry\n");
					goto Retry8;
				}
			}

			else if (p == 'N' || p == 'n' || p == 'm' || p == 'M')
				goto Main;

			else if (p == 'b' || p == 'B')
				goto Professor;

			else if (p == 'E' || p == 'e')
				system("pause");
			else
			{
				printf("Wrong Input! Retry\n");
				goto Retry9;
			}

			}
		
		
		else if (p == 'B' || p == 'b' || p == 'M' || p == 'm')
			goto Main;
		
		else if (p == 'E' || p == 'e')
			system("pause");

		else
		{
			printf("Wrong Input!. Retry\n");
			goto Retry4;
		}
	}

	else if (login == 'S' || login == 's')
	{
		system("cls");

		printf("Please enter your If Id OR Name in order to check your scores ");

	Retry10:

		k = 0;																					//initialization of k

		scanf("%s", identify);

		printf("\n");

		fp3 = fopen("result.txt", "r");															//Use result file - check math, and science score at once
		if (fp3 == NULL)																		//Before calculation - score is not opened
		{
			printf("The score isn't evaluated yet\n"
				"Go to professor Screen, and input the score\n"
				"Input B/M/E\n");
		Retry12:

			getchar();
			p = getchar();

			if (p == 'M' || p == 'm')
				goto Main;

			else if (p == 'B' || p == 'b')
				goto Main;

			else if (p == 'E' || p == 'e')
				system("Pause");

			else
			{
				printf("\nWrong Input. Retry\n");
				goto Retry12;
			}
		}

		for (i = 0; i <= 2; i++)
		{
			fgets(resultline, sizeof(resultline), fp3);															//read only
		}

		fgets(resultline, sizeof(resultline), fp3);
		
		for (i = 0; i <= 9; i++)
		{
			fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", math.id, math.name, &math.mid, &math.project, &math.final, &math.total, &math.percentage, &math.grade);
			
			if ((strcmp(identify, math.id) && strcmp(identify, math.name)) == 0)								//if identify is same as id or name >> printf his or her score
			{
				fseek(fp3, 0, SEEK_SET);																		//pointer will go bact to first to print

				for (i = 0; i <= 2; i++)																		//only read before find right person
				{
					fgets(resultline, sizeof(resultline), fp3);
					printf("%s", resultline);
				}

				fgets(resultline, sizeof(resultline), fp3);														//find the person -> print the score
				printf("%s", resultline);

				for (i = 0; i < j; i++)
				{
					fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", math.id, math.name, &math.mid, &math.project, &math.final, &math.total, &math.percentage, &math.grade);
				}

				fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", math.id, math.name, &math.mid, &math.project, &math.final, &math.total, &math.percentage, &math.grade);
				printf("%s\t%s\t%d\t%d\t%d\t%d\t%f\t%c\n", math.id, math.name, math.mid, math.project, math.final, math.total, math.percentage, math.grade);

				for (i = j+1; i <= 9; i++)
				{
					fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", math.id, math.name, &math.mid, &math.project, &math.final, &math.total, &math.percentage, &math.grade);
				}
				k++;																								//if student is identified, the identify input is right
			}
			j++;																									//find the order of name or id
		}		
		
		j = 0;
		for (i = 0; i <= 6; i++)																					//considering Enter, i is up to 6
		{
			fgets(resultline, sizeof(resultline), fp3);
		}

		for (i = 0; i <= 9; i++)
		{
			fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", science.id, science.name, &science.mid, &science.project, &science.final, &science.total, &science.percentage, &science.grade);
			if ((strcmp(identify, science.id) && strcmp(identify, science.name)) == 0)
			 {
				fseek(fp3, 468, SEEK_SET);																			//Before find the position, using ftell is helpful
				
				for (i = 0; i <= 4; i++)
				{
					fgets(resultline, sizeof(resultline), fp3);
					printf("%s", resultline);
				}

				for (i = 0; i < j; i++)
				{
					fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", science.id, science.name, &science.mid, &science.project, &science.final, &science.total, &science.percentage, &science.grade);
				}

				fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", science.id, science.name, &science.mid, &science.project, &science.final, &science.total, &science.percentage, &science.grade);
				printf("%s\t%s\t%d\t%d\t%d\t%d\t%f\t%c", science.id, science.name, science.mid, science.project, science.final, science.total, science.percentage, science.grade);

				for (i = j+1; i <= 9; i++)
				{
					fscanf(fp3, "%s	%s	%d	%d	%d	%d	%lf	%c", science.id, science.name, &science.mid, &science.project, &science.final, &science.total, &science.percentage, &math.grade);
				}
				k++;
			}
			j++;
		}
		j = 0;

		fclose(fp3);
		
		
		if (k == 0)																				//after identified, K is 1, so if k is 0 -> wrong input 				
		{
			printf("wrong input. retry\n");
			goto Retry10;
		}

		printf("\nInput B/M/E\n");

	Retry11:

		getchar();
		p = getchar();
		
		if (p == 'M' || p == 'm')
		goto Main;

		else if (p == 'B' || p == 'b')
		goto Main;

		else if (p == 'E' || p == 'e')
		system("Pause");

		else
		{
			printf("\nWrong Input. Retry\n");
			goto Retry11;
		}
	}

	else if (login == 'M' || login == 'm')
	goto Main;

	else if (login == 'B' || login == 'b')
	goto Welcome;
	
	else if (login == 'E' || login =='e')
	getchar();

	else
	{
		printf("Wrong Input! Retry\n");
		goto Retry3;
	}
}



