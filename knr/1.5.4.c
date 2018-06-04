/* counting charecters,words,new line */

#include<stdio.h>

#define IN 1  //if state in IN then it is in word
#define OUT 0 //otherwise it is outside of word(that may be \n \t ' '

int main( void )
{
	int nc,nw,nl;
	char c;
	int state = OUT;
	nc=nw=nl=0;
	
	while((c=getchar()) != EOF){
		++nc;
		if(c == '\n')
			nl++;

		if(c == '\n'|| c == '\t' || c == ' ')	{//if should not be else if
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			nw++;
		}
	}
	printf("\nnc=%d nl=%d  nw=%d \n",nc,nl,nw);

	return 0;
}




