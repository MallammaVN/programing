#include<stdio.h>
#define MAX 100

int get_line(char line[],int limit);

int main()
{
	int len;
	char line[MAX];
	while((len = get_line(line,MAX)) > 0)
		if(line[0] != '\n')
			printf("%s\n",line);
		
	return 0;
}

int get_line(char s[],int lim)
{
	int c,i;
	for(i = 0;(i < lim-1)&&((c = getchar()) != EOF) && c != '\n';++i)
		s[i] = c;
	if((c == '\n')&& (i == 0)){
		s[i] = c;
		return 1;
	}

	while(s[i-1] == ' ' || s[i-1] == '\t'){
		s[i-1] = '\n';
		i--;
	}
	s[i] = '\0';
	return i;
}

