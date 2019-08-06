#include <stdio.h>
int main(void)
{
	char c1,c2;
	scanf("%c",&c1);
	c2=c1-'a'+'A';
	printf("%c=%c",c1,c2);
	return 0;
}
