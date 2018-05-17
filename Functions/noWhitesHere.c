/* Exercise 1-18 : Write a program to remove trailing blanks and tabs from each line
 * of input, and to delete entirely blank lines. 
 * --- WIP --- */



#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim);

int main()
{

    int len;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0){
        if(len > 1){
        printf("%s", line);
        }
    }


}







int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c!= '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;

}
