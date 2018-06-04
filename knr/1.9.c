#include<stdio.h>
#define MAX 100

int get_line(char line[],int maxline);
void copy(char to[],char from[]);

/*print longest input line */
int main( void)
{
	int len;
	int max;
	char line[MAX];
	char longest[MAX];

	max = 0;
	while((len = get_line(line,MAX)) > 0)
		if(len > max){
			max = len;
			copy(longest,line);
		}
	if(max > 0)
		printf("%s",longest);
	return 0;
}

/*getline: read a line into s,return length */
int get_line(char s[],int lim)
{
	int c,i;
	for(i = 0;i < lim-1 && (c=getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
/*copy: copy 'from' into 'to'*/
void copy(char to[],char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
