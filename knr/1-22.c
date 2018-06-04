#include<stdio.h>
#define MAX 500

void fold(char s[],int col);

int main()
{
	int col;
	char line[MAX];
	int i = 0;
	int c;

	printf("Enter column:\n");
	scanf("%d",&col);
	printf("enter text:\n");
	while((c = getchar()) != EOF)
		line[i++] = c;
	printf("hai");
	line[i] = '\0';
	fold(line,col);

	return 0;
}


void fold(char s[],int col)
{
	int i = 0;
	int space = 0;
	int j = 0;
	char folder[MAX];

	while(s[i]){
		while((s[i] != ' ') && (s[i] != '\t'))
			folder[j++] = s[i++];
		if(++space < col){
			//space++;
			folder[j++] = s[i++];
		}
		if(space == col){
			folder[j] = '\0';
			printf("%s\n",folder);
			space = 0;
			j = 0;
			i++;
		}
	}
}
