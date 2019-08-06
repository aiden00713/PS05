#include <stdio.h>
int main(void)
{
	double d1,d2,d3,d4,d5,d6;
	scanf("%lf%lf",&d1,&d2);
	d3=d2/16;
	d4=d1+d3;
	d5=d4*453.59237;
	d6=d5/1000;
	printf("%lf POUND + %lf OUNCE = %lf KG",d1,d2,d6);
	
	return 0;
 } 
