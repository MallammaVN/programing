#include<stdio.h>

int main()
{
	int step = 0;
	int c;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			step = 0;
			putchar(c);
		}
		else{
			step = (++step) % 8;
			if( c == '\t'){
				while(step <= 8){
					putchar('#');
					step++;
				}
				step--;
			}
			else
				//putchar(c);
				printf("%c",c);
		}
	}
	return 0;
}

