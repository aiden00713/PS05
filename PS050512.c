#include <stdio.h>
int main(void)
{
	int n,n1,n2;
	scanf("%d%d",&n,&n1);
	n2=(n-1+n1)%7;
	printf("1=%d\n%d=%d",n,n1,n2);
	return 0;
}
