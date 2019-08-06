#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4,n5,n6,n7,n8,l;
	scanf("%d",&n);
	n1=n%10;
	n2=n/10;
	n3=n2%10;
	n4=n2/10;
	n5=n4%10;
	n6=n4/10;
	n7=n6%10;
	l=n7*8+n5*4+n3*2+n1;
	printf("%d=%d",n,l);
	return 0;
}
