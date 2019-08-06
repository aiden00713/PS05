#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4,n5,n6;
	scanf("%d",&n);
	n1=n/2;
	n2=n1%2;
	n3=n1/2;
	n4=n3%2;
	n5=n3%2;
	printf("%d(d)=%d%d%d(b)",n,n5,n4,n2);
	return 0;
}
