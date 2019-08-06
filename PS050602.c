#include <stdio.h>
int main(void)
{
	double d;
	scanf("%lf",&d);
	d = (int)d;
	printf("%.lf",d);
	return 0;
}
