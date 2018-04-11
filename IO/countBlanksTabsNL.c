/* Exercise 1-8 : Write a program to count
 * blanks, tabs, and newlines. */

#include <stdio.h>

int main(){

	int c,blanks, tabs, newLines;
	blanks = tabs = newLines = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
			++newLines;
		else if(c == '\t')
			++tabs;
		else if(c == ' ')
			++blanks;
	}
	printf("Blanks : %d\nTabs : %d\nNewLines : %d\n",blanks, tabs, newLines);
}

