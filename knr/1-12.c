#include<stdio.h>
#define OUT 0 //cout of space or tab
#define IN 1 //inside continous space or tab

int main( void )
{
	char c[50];
	int i=0;
	int state=OUT;
	while((c[i++]=getchar()) != EOF);
	printf("\n");
	i=0;
	while(c[i] != EOF){
		if(c[i] != ' ' && c[i] != '\t'){
			state = OUT;
			putchar(c[i]);
		}
		else if(state == OUT){
			putchar('\n');
			state = IN;
		}
		i++;
	}
	return 0;
}
