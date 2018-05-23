/* Exercise 1-19. Write a function reverse (s) that reverses the character
string s. Use it to write a program that reverses its input a line at a time. */


#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void reverse(char string[]);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = my_getline(line, MAXLINE)) > 0){
        reverse(line);
    }
    


}

int my_getline(char s[], int lim)
{
    int c, i;

    for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;

}
void reverse(char s[])
{
    int i;

    for(i = 0; s[i] != '\n' && s[i] != '\0';i++){}
    for(i = i-1; i >= 0; --i){
        putchar(s[i]);
    }
    putchar('\n');


}
