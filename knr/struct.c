#include<stdio.h>

struct a{
	int ab:7;
	int c:1;
}abc;
int main()
{abc.ab=5;
	abc.c=5;
	printf("%d  %d\n",abc.ab,abc.c);
	return 0;
}
