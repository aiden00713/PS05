#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4;
	
	scanf("%d",&n);
	n1=n/50;            //先除50來求整數 
	n2=(n%50)/10;      //求除50的餘數再除10 
	n3=((n%50)%10)/1; //求除50的餘數再除10的餘數再除1 
	
	printf("%d=50*%d+10*%d+1*%d",n,n1,n2,n3);
	
	return 0;
}
