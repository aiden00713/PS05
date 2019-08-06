#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4;
	scanf("%d",&n);
	n1=n/10;
	n2=n%10;
	n3=n2*10+n1;
	n4=n3+n;
	printf("%d+%d=%d",n,n3,n4);
	return 0;
}
