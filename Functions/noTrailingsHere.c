/* Exercise 1-18 : Write a program to remove trailing blanks and tabs from each line
 * of input, and to delete entirely blank lines. */



#include <stdio.h>
#define MAXWHITES   512 /* How many whitespaces can we store in buffer */


int main()
{

    int len, nonEmptyLine;
    char c, trailingBuffer[MAXWHITES];

    while((c = getchar()) != EOF){      /* While there is input, we check the input */
        if(c == '\n'){                  /* If it's a newline */
            len = 0;                    /* We reset the length, because of new line of input */
            if(nonEmptyLine){           /* If nonEmptyLine is not zero, it means there is input before newline */
                putchar('\n');          /* So we can print the newline */
            }
            nonEmptyLine = 0;           /* Nevertheless, we reset the value of nonEmptyLine and go to next input character */
        }
        else if(c == ' ' || c == '\t'){ /*If it is a whitespace or tab */
            trailingBuffer[len++] = c;  /* We put it into the trailingBuffer and increment length */
        }
        else{                           /* If none of it : it means it's a valid character */
            if(!nonEmptyLine){          /* If nonEmptyLine is at zero, we put it at 1, because the line is not empty. */
                nonEmptyLine = 1;
            }
            if(len != 0){               /* if the length is not zero, it means there IS a buffer and data in it BEFORE the valid character. */
                trailingBuffer[len] = '\0'; /* We then put a null value to terminate the string, and let C know where it ends . */ 
                printf("%s", trailingBuffer);   /* We then print the whole buffer, so the line is correct, with whites & tabs before valid character */
                len = 0;                /* We reset the length */
            }
            putchar(c);                 /* Finally, we print out the inputted character */
        }


    }
    

}
