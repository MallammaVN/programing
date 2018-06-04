#include<stdio.h>

#define IN 1
#define OUT 0
#define MAX 50

int main()
{
	char buf[MAX];
	FILE *fp;
	int i;
	static int loc;
	int dquote =  OUT;
	int COMT = OUT;

	fp = fopen("comment.c","r+");

	while(fgets(buf,MAX,fp)){
		i = 0;
		while(buf[i] != '\0'){
			if(buf[i] == '/' && buf[i+1] == '/' && dquote == OUT){
				buf[i] = '\0';
				break;
			}
			else if(buf[i] == '/' && buf[i+1] == '*' && dquote == OUT){
				loc = i;
				COMT = IN;
				while(buf[i] != '\0'){
					if(buf[i] == '*' && buf[i+1] == '/'){
						COMT = OUT;
						buf[loc] = '\0';
						break;
					}
					if(buf[i+1] == '\0'){
						buf[loc] = '\0';
						printf("%s",buf);
						fgets(buf,MAX,fp);
						loc = 0;
						i = 0;
					}
					i++;
				}
			}
			else if(buf[i] == '"' && COMT == OUT){
				dquote = IN;
				while(buf[i] != '\0'){
					if(buf[i-1] != '/' && buf[i] == '"'){
						dquote = OUT;
						break;
					}
					i++;
				}
			}
			i++;
		}
		printf("%s",buf);
	}
	return 0;
}

