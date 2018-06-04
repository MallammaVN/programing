#include<stdio.h>

int main()
{
	int c;
	int space = 0;
	int step = 0;
	FILE *fp;

	fp = fopen("1.txt","w");

	while((c = getchar()) != EOF){
		if(c == ' ')
			space++;
		else if(c == '\n')
			fputc(c,fp);
		else{
			fputc(c,fp);
			space = 0;
			step = ++step % 4;
		}
		if(space >= 2){
			if((step == 2) && (space == 2)){
				putc('\t',fp);
				space = 0;
				step = 0;
			}
			else if((step == 1) && (space == 3)){
				putc('\t',fp);
				space = 0;
				step = 0;
			}
			else if((step == 0) && (space == 4)){
				putc('\t',fp);
				space = 0;
				step = 0;
			}
		}
	}
	return 0;
}

