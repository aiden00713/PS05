#include <stdio.h>
int main(void)
{
	int n,m;
	char c;
	scanf("%d%d",&n,&m);
	c=(n*4+m)%26+'A';
	printf("%c",c);
	return 0;
}
