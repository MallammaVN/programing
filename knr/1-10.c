#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

/*int main()
{
	char c[10];
	int i=0;
printf("\\\\");
	while((c[i++]=getchar()) != EOF);
	//c[i]='\0';

//	printf("\ninput:%s \n",c);
//	c[i] = '\0';

	i=0;
	printf("\n");
	if(putchar(c[i++]) == EOF){
		printf("%d\n",errno);
		exit(1);
//		putchar(c[i]);
//		i++;
	}

//		printf("%d\n",i);
//		putchar(c[i++]);
//	i=0;
//	while(c[i] != EOF){
	if(c[i] == '\t')
			c[i] = '\t';
		else if(c[i] == '\b')
			c[i] = '\b';
		else if(c[i] == '\\')
			c[i] = '\\';
		else
			;
//		putchar(c[i++]);
//	}
	return 0;
}*/

int main()
{
	int c;
	c=getchar();
	putchar(c);
	c=getchar();
	putchar(c);
	printf("\n");
	while((c = getchar()) != EOF)
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("hai");
		else if(c == '\\')
			printf("\\\\");
		else
			putchar(c);
	return 0;
}
