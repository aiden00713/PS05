#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3;
	scanf("%d",&n);
	n1=n/10;
	n2=n%10;
	n3=n2*10+n1;
	printf("%d*2=%d",n3,n3*2);
	return 0;
}
