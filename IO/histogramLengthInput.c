/* Exercise 1-13: Write a program to print a histogram of the lengths 
 * of words in its input. It is easy to draw the histogram with
 * the bars horizontal; a vertical orientation is more challenging. */


#include <stdio.h>

#define IN          1
#define OUT         0
#define MAXLENGTH   11 /* We start counting from 1, so 11 means 10 letters max words */

int main()
{
	int c, state, length;
	int wordCount[MAXLENGTH] = { 0 }; /* Populate the array with 0s */
	length = 0;
	state = OUT;

	while((c=getchar()) != EOF){ /* For each character in input */

		/*
		 * Determine if we are in a word, or not
		 */
		if( c == ' ' || c == '\n' || c == '\r' || c == '\t'){
			state = OUT;
		}
		else
		{
			state = IN;
		}

		if(state == IN){ /*if already in a word */
				++length;
			}
			else
			{
				state = OUT;
				if(length <= MAXLENGTH){ /* check against maxlength to avoid segfault */
					++wordCount[length];
				}
				length = 0;
			}

		}
	++wordCount[length]; /* bump last word length */
	printf("Horizontal Histogram\n\n");
	/* Horizontal histogram */
	for(int i =1; i < MAXLENGTH; ++i){
		printf("| %2d | ", i);
		for (int j = 0; j < wordCount[i] ; ++j){
			putchar('*');
		}
		putchar('\n');
	} 

	/* Vertical Histogram */

	/* for the vertical one, there is a need of knowing which number of letters
	 * is the most used. */

	printf("\n\nVertical Histogram\n\n");

	int most = 0;
	for(int k = 1; k < MAXLENGTH; ++k){
		if(most < wordCount[k])
			most = wordCount[k];
	}

	for(int zz = most; zz > 0; --zz){
		/* printf("%d|", zz); */
		for (int l = 1; l < MAXLENGTH; ++l){
			if(wordCount[l] >= zz)
				printf("* ");
			else
				printf("  ");		
		}
		putchar('\n');
	}
	for (int m = 1; m < MAXLENGTH; m++){
		printf("==");
	}
	putchar('\n');

	for(int n=1; n < MAXLENGTH; n++){
		printf("%d ", n);
	}
	printf("\n\n");

}
