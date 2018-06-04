#include<stdio.h>
#define MAX 100

int get_line(char line[],int lim);

int main()
{
	int len;
	char line[MAX];

	while((len = get_line(line,MAX)) > 0)
		if(len > 5)
			printf("%s",line);

	return 0;
}

int get_line(char s[],int lim)
{
	int c,i;

	for(i = 0;(i < lim-1) && ((c=getchar()) != EOF) && (c !='\n');++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
