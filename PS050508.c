#include <stdio.h>
int main(void)
{
	int n,n1;
	char c='A';
	scanf("%d",&n);
	n1=n%26;
	printf("%c",c+n1);
 } 
