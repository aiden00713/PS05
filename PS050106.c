#include <stdio.h>
int main(void)
{
	int n,n1,n2;
	scanf("%d",&n);
	n1=n/5;
	n2=n%5;
	printf("%d=5*%d+%d",n,n1,n2);
	return 0;
}
