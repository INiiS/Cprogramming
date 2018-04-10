#include <stdio.h>

#define	IN			1
#define OUT			0
#define MAXLENGTH	25

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
				++wordCount[length];
				length = 0;
			}

		}
	++wordCount[length]; /* bump last word length */
	
	for(int i =1; i < MAXLENGTH; ++i){
		printf("%d letters words : %d\n", i, wordCount[i]);
				}
}
