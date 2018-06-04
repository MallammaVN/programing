#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int count = 0;
	int c;
	int state = OUT;

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c== '\n'){
			if(state == OUT){
				putchar('\n');
				while(count--)
					putchar('_');
				putchar('|');
				putchar('\n');
				state = IN;
				count =0;
			}
		}
		else{
			putchar('_');
			state = OUT;
			count++;
		}
	}
	return 0;
}
