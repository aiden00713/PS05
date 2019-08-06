#include <stdio.h>
int main(void)
{
	char c,c1,c2,c3;
	scanf("%c",&c);
	c1=c-'A';
	c2=25-c1;
	c3='A'+c2;
	printf("%c=%c",c,c3);
	return 0;
}
