#include<stdio.h>

/*
main()
{
	FILE* f1;
	char c;
	printf("Data Input\n\n");
	
	f1 = fopen("INPUT", "w");
	
	while ((c = getchar()) != EOF)
		putc(c, f1);
	
	fclose(f1);
	printf("\nData Output\n\n");
	
	f1 = fopen("INPUT", "r");
	
	while ((c = getc(f1)) != EOF)
		printf("%c", c);
	
	fclose(f1);
}
*/


/*
main()
{
	FILE* f1, * f2, * f3;
	int number, i;

	printf("Contents of DATA file\n\n");
	f1 = fopen("DATA", "w");
	for (i = 1; i <= 30; i++)
	{
		scanf_s("%d", &number);
		if (number == -1)
			break;
		putw(number, f1);
	}

	fclose(f1);

	f1 = fopen("DATA", "r");
	f1 = fopen("ODD", "r");
	f1 = fopen("EVEN", "r");

	while ((number = getw(f1)) != EOF)
	{
		if (number % 2 == 0)
			putw(number, f3)
			;
		else
			putw(number, f2);
	}

	fclose(f1);
	fclose(f2);
	fclose(f3);

	f2 = fopen("ODD", "r");
	f3 = fopen("EVEN", "r");

	printf("\n\nContents of ODD file\n\n");
	while ((number = getw(f2)) != EOF)
		printf("%4d", number);

	printf("\n\nContents of EVEN file\n\n");
	while ((number = getw(f3)) != EOF)
		printf("%4d", number);

	fclose(f2);
	fclose(f3);
}
*/

/*
main()
{
	FILE* fp;
	int number, quantity, i;
	float price, value;
	char item[10], filename[10];

	printf("Input file name\n");
	scanf_s("%s", filename);
	fp = fopen(filename, "w");
	printf("Input inventory data\n\n");
	printf("Item name Number Price Quantity\n");
	for (i = 1; i <= 3; i++)
	{
		fscanf(stdin, "%s,%d,%f,%d", item, &number, &price, &quantity);
		fprintf(fp, "%s,%d,%.2f,%d", item, number, price, quantity);
	}
	fclose(fp);
	fprintf(stdout, "\n\n");

	fp = fopen(filename, "r");

	printf("Item name Number Price Quantity Value\n");
	for (i = 1; i <= 3; i++)
	{
		fscanf(stdin, "%s,%d,%f,%d", item, &number, &price, &quantity);
		value = price * quantity;
		fprintf(stdout, "%-8s,%7d,%8.2f,%8d,%11.2f\n", item, number, price, quantity, value);
	}

	fclose(fp);
}
*/

/*
main()
{
	char* filename;
	FILE* fp1, * fp2;
	int i, number;

	fp1 = fopen("TEST", "w");
	for (i = 10; i <= 100; i += 10)
		putw(i, fp1);

	fclose(fp1);

	printf("\nInput filename\n");

open_file:
	scanf_s("%s", filename);

	if ((fp2 = fopen(filename, "r")) == NULL)
	{
		printf("Cannot open the file.\n");
		printf("Type filename again.\n\n");
		goto open_file;
	}

	else
		for (i = 1; i <= 20; i++)
		{
			number = getw(fp2);
			if (feof(fp2))
			{
				printf("\nRan out of data.\n");
				break;
			}
			else
				printf("%d\n", number);
		}

	fclose(fp2);
}
*/

/*
main()
{
	FILE* fp;
	long n;
	char c;

	fp = fopen("RANDOM", "w");

	while ((c = getchar()) != EOF)
		putc(c, fp);
	printf("NO. of characters entered=%ld\n", ftell(fp));
	fclose(fp);

	fp = fopen("RANDOM", "r");
	n = 0L;

	while (feof(fp) == 0)
	{
		fseek(fp, n, 0);
		printf("Position of %c is %ld\n", getc(fp), ftell(fp));
		n = n + 5L;
	}
	putchar('\n');

	fseek(fp, -1L, 2);
	do
	{
		putchar(getc(fp));
	} while (!fseek(fp, -2L, 1));
	fclose(fp);
}
*/

/*
struct invent_record
{
	char name[10];
	int number;
	float price;
	int quantity;
};

main()
{
	struct invent_record item;
	char filename[10];
	int response;
	FILE* fp;
	long n;
	void append(struct invent_record* x, file * y);

	printf("Type filename");
	scanf_s("%s", filename);

	fp = fopen(filename, "+a");
	do
	{
		append(&item, fp);
		printf("\nItem %s appended.\n", item.name);
		printf("\nDo you want to add another item\(1 for YES /0 for NO)?");
		scanf_s("%d", &response);
	} while (response == 1);

	n = ftell(fp);
	fclose(fp);

	fp = fopen(filename, "r");
	while (ftell(fp) < n)
	{
		fscanf(fp, "%s %d %f %d", item.name, &item.number, &item.price, &item.quantity);
		fprintf(stdout, "%-8s %7d %8.2f %8d\n", item.name, item.number, item.price, item.quantity);
	}
	fclose(fp);
}
void append(struct invent_record* product, File* ptr)
{
	printf("Item name:");
	scanf("%s", product->name);
	printf("Item number:");
	scanf("%d", &product->number);
	printf("Item price:");
	scanf("%f", &product->price);
	printf("Quantity:");
	scanf("%d", &product->quantity);
	fprintf(ptr, "%s %d %.2f %d",
		product->name,
		product->number,
		product->price,
		product->quantity);
}
*/


#include <stdlib.h>
#define NULL 0

/*
main()
{
	int* p, * table;
	int size;
	printf("\nWhat is the size of table?");
	scanf_s("%d", size);
	printf("\n");

	if ((table = (int*)malloc(size * sizeof(int))) == NULL)
	{
		printf("No space available \n");
		exit(1);
	}

	printf("\n Address of the first byte is %u\n", table);
	printf("\nInput table values\n");

	for (p = table; p < table + size; p++)
	{
		scanf_s("%d", p);
	}

	for (p = table + size - 1; p >= table; p--)
	{
		printf("%d is stored at address %u \n", *p, p);
	}
}
*/

/*
main()
{
	char* buffer;

	if ((buffer = (char*)malloc(10)) = NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size %d created \n", _msize(buffer));
	strcpy(buffer, "HYDERBAD");
	printf("\nBuffer contains: %s \n", buffer);

	if ((buffer = (char*)realloc(buffer, 15)) = NULL)
	{
		printf("Reallocation failed.\n");
		exit(1);
	}
	printf("\nBuffer size modified.\n");
	printf("\nBuffer still contains: %s.\n", buffer);
	strcpy(buffer, "SECUNDRABAD");
	printf("\nBuffer now contains: %s \n", buffer);

	free(buffer);
}
*/

/*
main()
{
	node* head;
	void create(node * p);
	int count(node * p);
	void print(node * p);
	head = (node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\nNumber of items=%d \n", count(head));
}
void create(node* list)
{
	printf("Input a number\n");
	printf("(type -999 at end): ");
	scanf("%d", &list->number);

	if (list->number == -999)
	{
		list->next = NULL;
	}
	else
	{
		list->next = (node*)malloc(sizeof(node));
		create(list->next);
	}
	return;
}
*/

/*
node* insert(node* head, int x)
{
	node* p1, * p2, * p;
	p1 = NULL;
	p2 = head;
	for (; p2->number < x; p2 = p2->next)
	{
		p1 = p2;
		if (p2->next->next == NULL)
		{
			p2 = p2->next;
			break;
		}
	}
	p = (node*)malloc(sizeof(node));
	p->number = x;
	p->next = p2;
	if (p1 = NULL)
		head = p;
	else
		p1->next = p;
	return(head);
}
int count(node* list)
{
	if (list->next == NULL)
		return(0);
	else
		return(1 + count(list->next));
}
*/

/*
struct linked_list
{
	int number;
	struct linked_list* next;
};
typedef struct linked_list node;

main()
{
	int n;
	node* head;
	void create(node* p);
	node* insert(node* p, int n);
	void print(node* p);
	head = (node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	printf("Original list:");
	print(head);
	printf("\n\n");
	printf("Input number to be inserted:");
	scanf_s("%d", &n);
	head = insert(head, n);
	printf("\n");
	printf("New list:");
	print(head);
}
void create(node* list)
{
	printf("Input a number\n");
	printf("(type -999 at end):");
	scanf_s("%d", &list->number);
	if (list->number == -999)
	{
		list->next = NULL;
	}
	else
	{
		list->next = (node*)malloc(sizeof(node));
		create(list->next);
	}
	return;
}
void print(node* list)
{
	if (list->next != NULL)
	{
		printf("%d-->", list->number);
		if (list->next->next == NULL)
			printf("%d", list->next->number);
		printf("list->next");
	}
	return;
}
*/

/*
main()
{
	int n;
	node* head=NULL;
	void print(node* p);
	node* insert_Sort(node* p, int n);
	printf("Input the list of numbers.\n");
	printf("At end, type -999.\n");
	scanf_s("%d", &n);
	while (n != -999)
	{
		if (head == NULL)
		{
			head = (node*)malloc(sizeof(node));
			head->number = n;
			head->next = NULL;
		}
		else
		{
			head = insert_Sort(head, n);
		}
		scanf_s("%d", &n);
	}
	printf("\n");
	print(head);
	printf("\n");
}
node* insert_Sort(node* list, int x)
{
	node* p1, * p2, * p;
	p1 = NULL;
	p2 = list;
	for (; p2->number < x; p2 = p2->next)
	{
		p1 = p2;
		if (p2->next == NULL)
		{
			p2 = p2->next;
			break;
		}
	}
	p = (node*)malloc(sizeof(node));
	p->number = x;
	p->next = p2;
	if (p1 = NULL)
		list = p;
	else
		p1->next = p;
	return(list);
}
void print(node* list)
{
	if (list == NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%d-->", list->number);
		printf("list->next");
	}
	return;
}
*/

