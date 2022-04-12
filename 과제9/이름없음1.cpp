
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main()
{
    int i, j, k, space = 0, length_text, count[100] = { 0 };
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
    words[1][0] = '0';
    printf("%c", words[1][0]);
    
   for (i = 0; i <= space; i++)
    {
        k = i;
        for (j = k + 1; j <= space; k++)
        {
            if (words[i][0] == '0')
                break;

            else
            {
                if (strcmp(words[i], words[j]) == 0)
                {
                    words[j][0] = '0';
                    count[i] ++;
                }

                else
                    continue;
            }

        }
    }
    printf("%c", words[2][0]);
   
    ///*/*   for (c = 'a'; c <= 'z'; c++)
    //   {
    //       for (j = 0; j <= words[i] == '\0'; j++)
    //       {
    //           if (words[j][0] == c)
    //           {
    //               printf("%s : %d\n", words[j], count[j]);
    //           }
    //       }
    //   }*/*/

}
