#include <stdio.h>
int main(void)
{
	int n1,n2;
	scanf("%d",&n1);
	n2=(n1/100)%10;
	printf("%d=%d",n1,n2);
	return 0;
}
