#include<stdio.h>

int main( void )
{
	int c;
	int cc[30]={0};
	int i = 0;
	int length;
	int max;

	while((c = getchar()) != EOF){
		if(c >= 'A' && c <= 'Z')
			cc[i++] = (c - 'A')+ 1;
		else if (c >= 'a' && c <= 'z')
			cc[i++] = (c - 'a' )+ 1;
		else 
			i++;
	}
	length = i;
	max = cc[i--];
	while(i--){
		if(max < cc[i])
			max = cc[i];
	}
	printf("\n");
	while( max ){
		for(i = 0;i <= length;i++){
			if(cc[i] < max){
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
			else{
				putchar('|');
				putchar(' ');
				putchar('|');
			}
		}
		printf("\n");
		max--;
	}
	return 0;
}
