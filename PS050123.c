#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4;
	
	scanf("%d",&n);
	n1=n/50;            //����50�ӨD��� 
	n2=(n%50)/10;      //�D��50���l�ƦA��10 
	n3=((n%50)%10)/1; //�D��50���l�ƦA��10���l�ƦA��1 
	
	printf("%d=50*%d+10*%d+1*%d",n,n1,n2,n3);
	
	return 0;
}
