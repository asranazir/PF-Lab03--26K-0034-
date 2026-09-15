#include <stdio.h>
int main()
{
	float num;
	printf(" Enter a Floating-point Number: ");
	scanf("%f" , &num);
	
	printf(" number formatted with 1 decimal place= %.1f \n" , num);
	printf(" number formatted with 3 decimal place= %.3f" , num);
	return 0;
}
