/* Exercise 1-18 : Write a program to remove trailing blanks and tabs from each line
 * of input, and to delete entirely blank lines. 
 * --- WIP --- */



#include <stdio.h>
#define MAXLINE 1000


int main()
{



    int i, c, sp, n;
     sp = n = 0;


    /*for (i = 0; i < MAXLINE -1 && (c = getchar()) != EOF; ++i){*/
     while((c=getchar()) != EOF){
         if(c == '\n')
             printf("%c", c);
         if(c == '*'){
            ++sp;
        }
        else if(c != '\t'){
            if(sp == 1){
                printf(" %c",c);
                sp = 0;
            }
            else if(sp == 0){
                printf("%c", c); 
            }
        }
       

    }
    

}
