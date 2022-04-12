#include <stdio.h>              /* printf, scanf definitions */

/*-------------------------------------Question1-------------------------------------*/

/*
/*
 * Converts distances from miles to kilometers.
 */
# define KMS_PER_MILE 1.609     /* conversion constant */

 /*
 int
 main(void)
 {
     double miles, kms;

     printf("Enter the distance in miles");
     scanf_s("%lf", &miles);

     kms = KMS_PER_MILE * miles;

     printf("That equals %f kilometers. \n", kms);

     return(0);
 }
 */


 /*
 void main(void)
 {
     char my_char;
     printf("Please type a character:");
     my_char = getchar();
     printf("\nYou have typed this character:");
     putchar(my_char);
 }
 */

 /*
 void main(void)
 {
     char my_char;
     printf("Please type a character:");
     scanf_s("%c", &my_char);
     printf("\nYou have typed this character: %c", my_char);
 }
 */

 /*
 main()
 {
     int months, days;

     printf("Enter days\n");
     scanf_s("%d", &days);

     months = days / 30;
     days = days % 30;
     printf("Months = %d days Days = %d", months, days);
 }
 */

 /*
 #define N 100
 #define A 2
 int main()
 {
     int a;
     a = A;
     while (a < N)
     {
         printf("%d\n", a);
         a *= a;
     }
 }
 */

 
 main()
 {
     int a, b, c, d;

     a = 15;
     b = 10;
     c = ++a - b;

     printf("a = %d b = %d c = %d\n", a, b, c);
     d = b++ + a;

     printf("a = %d b = %d d = %d\n", a, b, d);
     printf("a/b = %d\n", a / b);
     printf("a%%b = %d\n", a % b);
     printf("a *= b = %d\n", a *= b);
     printf("%d\n", (c > d) ? 1 : 0);
     printf("%d\n", (c < d) ? 1 : 0);
 }
 

 /*
 main()
 {
     float a, b, c, x, y, z;

     a = 9;
     b = 12;
     c = 3;

     x = a - b / 3 + c * 2 - 1;
     y = a - b / (3 + c) * (2 - 1);
     z = a - (b / (3 + c) * 2) - 1;

     printf("x = %f\n", x);
     printf("y = %f\n", y);
     printf("z = %f\n", z);
 }
 */

 /*------------------------------------ Sum of n terms of 1/n ---------------------------------------*/
 /*
 main()
 {
     float sum, n, term;
     int count = 1;

     sum = 0;
     printf("Enter value of n\n");
     scanf_s("%f", &n);
     term = 1.0 / n;
     while (count <= n)
     {
         sum = sum + term;
         count++;
     }
     printf("Sum = %f\n", sum);
 }
 */

 /*
 main()
 {
     float sum;
     int n;

     sum = 0;

     for (n =1; n <= 10; ++n)
     {
         sum = sum + 1 / (float) n;
         printf("%2d %6.4f\n", n, sum);
     }
 }
 */

 /*
 #define BASE_SALARY 1500.00;
 #define BONUS_RATE  200.00;
 #define COMMISSION  0.02;

 main()
 {
     int quantity;
     float gross_salary, price;
     float bonus, commision;

     printf("input number sold and price\n");
     scanf("%d %f", &quantity, &price);

     bonus = BONUS_RATE * quantity;
     commision = COMMISSION * quantity * price;
     gross_salary = BASE_SALARY + bonus + commision;

     printf("\n");
     printf("Bonus       = %6.2f\n", bonus);
     printf("Commision   = %6.2f\n", commision);
     printf("Gross salary= %6.2f\n", gross_salary);
 }
 */

 /*-------------------------------------Question2-------------------------------------*/

 /*
 main()
 {
     float Korean1, Math1, English1,
         Korean2, Math2, English2,
         Korean3, Math3, English3;
     float James_avg, Tom_avg, Kate_avg;
     char James, Tom, Kate;

     printf("*The score is from 0 to 100.*\n\n");

     printf("Input James's Korean Score.\n");
     scanf_s("%f", &Korean1);
     printf("Input James's Math Score.\n");
     scanf_s("%f", &Math1);
     printf("Input James's English Score.\n");
     scanf_s("%f", &English1);
     James_avg = (Korean1 + Math1 + English1) / 3;
     if (James_avg >= 50)
         James = 'p';
     else
         James = 'f';


     printf("\nInput Tom's Korean Score.\n");
     scanf_s("%f", &Korean2);
     printf("Input Tom's Math Score.\n");
     scanf_s("%f", &Math2);
     printf("Input Tom's English Score.\n");
     scanf_s("%f", &English2);
     Tom_avg = (Korean2 + Math2 + English2) / 3;
     if (Tom_avg >= 50)
         Tom = 'p';
     else
         Tom = 'f';

     printf("\nInput Kate's Korean Score.\n");
     scanf_s("%f", &Korean3);
     printf("Input Kate's Math Score.\n");
     scanf_s("%f", &Math3);
     printf("Input Kate's English Score.\n");
     scanf_s("%f", &English3);
     Kate_avg = (Korean3 + Math3 + English3) / 3;
     if (Kate_avg >= 50)
         Kate = 'p';
     else
         Kate = 'f';

     if (James_avg >= Tom_avg && James_avg >= Kate_avg)
     {
         printf("\nJames's average : %.2f >> %c\n", James_avg, James);

         if (Tom_avg >= Kate_avg)
         {
             printf("Tom's average : %.2f >> %c\n", Tom_avg, Tom);
             printf("Kate's average : %.2f >> %c\n", Kate_avg, Kate);
         }
         else
         {
             printf("Kate's average : %.2f >> %c\n", Kate_avg, Kate);
             printf("Tom's average : %.2f >> %c\n", Tom_avg, Tom);
         }
     }

     else if (James_avg <= Tom_avg && Tom_avg >= Kate_avg)
     {
         printf("\nTom's average : %.2f >> %c\n", Tom_avg, Tom);

         if (James_avg >= Kate_avg)
         {
             printf("James's average : %.2f >> %c\n", James_avg, James);
             printf("Kate's average : %.2f >> %c\n", Kate_avg, Kate);
         }
         else
         {
             printf("Kate's average : %.2f >> %c\n", Kate_avg, Kate);
             printf("James's average : %.2f >> %c\n", James_avg, James);
         }
     }

     else
     {
         printf("\nKate's average : %.2f >> %c\n", Kate_avg, Kate);

         if (James_avg >= Tom_avg)
         {
             printf("James's average : %.2f >> %c\n", James_avg, James);
             printf("Tom's average : %.2f >> %c\n", Tom_avg, Tom);
         }
         else
         {
             printf("Tom's average : %.2f >> %c\n", Tom_avg, Tom);
             printf("James's average : %.2f >> %c\n", James_avg, James);
         }

     }
 }
 */

 /*-------------------------------------Question3-------------------------------------*/

 /*
 main()
 {
     int a, b;

     printf("Input 2 numbers\n");
     scanf_s("%d %d", &a, &b);

     printf("\n*Bitwise %d AND %d : %d", a, b, a & b);
     printf("\n*Bitwise %d OR %d : %d", a, b, a | b);
     printf("\n*Bitwise %d XOR %d : %d", a, b, a ^ b);
     printf("\n*Shift %d to %d Left : %d", a, b, a << b);
     printf("\n*Shift %d to %d Right : %d", a, b, a >> b);
 }
 */

 /*-------------------------------------Question4-------------------------------------*/

/*
main()
{
    unsigned int num1, bit1, bit2, bit3, bit4, swapnum1;


    printf("Input the integer number(one nibble number)\n");
    scanf_s("%d", &num1);

    bit1 = (num1 & 1) << 1;
    bit2 = (num1 & 2) >> 1;
    bit3 = num1 & 4;
    bit4 = num1 & 8;

    swapnum1 = bit1 | bit2 | bit3 | bit4;

    printf("The number that 1st and 2nd bits are swapped each other is : %d\n\n", swapnum1);

    unsigned int num2, bit5, bit6, bit7, bit8, swapnum2;

    printf("Input the hexadecimal number (one nibble number)\n");
    scanf_s("%x", &num2);

    bit5 = (num2 & 1) << 1;
    bit6 = (num2 & 2) >> 1;
    bit7 = num2 & 4;
    bit8 = num2 & 8;

    swapnum2 = bit5 | bit6 | bit7 | bit8;

    printf("The hexadecimal number that 1st and 2nd bits are swapped each other is : %x", swapnum2);
}
*/

/*-------------------------------------Question5-------------------------------------*/

/*
main()
{
    unsigned int num1;
    unsigned int swapnum;
    printf("Input the number\n");
    scanf_s("%u", &num1);

    swapnum = ((num1 & 0x0F) << 4 | (num1 & 0xF0) >> 4);

    printf("\nThe number that higher nibble and lower nibble are swapped each other is : %d", swapnum);
}
*/