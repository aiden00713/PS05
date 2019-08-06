#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4,l;

	scanf("%d",&n);
	l=n/1000;
	n1=l*8;
	l=(n%1000)/100;
	n2=l*4;
	l=(n%100)/10;
	n3=l*2;
	l=(n%10);
	n4=n1+n2+n3+l;
	printf("%04d = %d",n,n4);
	
	return 0;
}
