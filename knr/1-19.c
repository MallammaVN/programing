#include<stdio.h>

#define MAX 100
int get_line(char s[],int lim);

int main()
{
	int len;
	char line[MAX]={0};

	while((len = get_line(line,MAX)) > 0)
		printf("%s\n",(line+len));



	return 0;
}

int get_line(char s[], int lim)
{
	int c,i;
	s[lim-1] = '\0';
//	s[lim-2] = '\n';
	for(i=lim-2;i >= 0 && ((c = getchar()) != EOF) && c !='\n';--i)
		s[i] = c;
	if(c == EOF)
		return 0;

	return i+1;
}
