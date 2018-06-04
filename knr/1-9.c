#include<stdio.h>

int main()
{
	char c[20];
	int i=0;
	while((c[i++]=getchar()) != EOF);
	for(i=0,printf("\n");c[i] != EOF;){
		if(c[i] != ' ')
			putchar(c[i++]);
		else{
			putchar(c[i++]);
			while(c[i++]== ' ');
		}
	
	}
	printf("\n");
	return 0;
}

