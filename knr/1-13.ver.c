#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c;
	int i=0;
	int wc[20]={0};
	int max=0;
	int state = OUT;
	int length;

	while((c=getchar()) != EOF){
		if(  c == ' ' || c == '\n' || c == '\t'){
			i++;
			
		}
		else{
	
			++wc[i];
		}
	}
	length=i;

	//for(i=0;i<20;i++)
	//	printf("%d  ",wc[i]);
	
	/*while(wc[i] != 0){
		if(wc[i] > wc[i+1])
			max = wc[i];
		else
			max = wc[i+1];
		i++;
	}*/
	printf("i=%d\n",i);
	max=wc[i];
	while(--i){
		if(wc[i] > max)
			max = wc[i];

	}
	printf("max=%d",max);
	printf("\n");
	while( max ){
		for(i = 0;i <= length ; i++){
			if(wc[i] < max){
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
				else if(wc[i] >= max){
//				putchar('*');
				putchar('|');
				putchar(' ');
				putchar('|');
			}
//				else
//				putchar(' ');
//				putchar('-');
//				putchar('_');
//				putchar(' ');
		}
		printf("\n");
		max--;
	}
	return 0;
}

