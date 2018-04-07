#include <stdio.h>

#define	IN			1
#define OUT			0
#define MAXLETTERS	10 /* Pour fixer un cadre, on limite le nombre de lettres max
						  d'un mot à 10 */


int main()
{
	int c, state, cc;
	int wc[MAXLETTERS];

	wc[MAXLETTERS] = 0;

	state = OUT;
	while ((c = getchar())!= EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			
		}

		while(state == IN){
			++cc;
		}
		++wc[cc];
	}
	for(int i = 0; i < MAXLETTERS; ++i){
		printf("%d letters : %d\n",i,wc[i]);
	}
}

