#include <stdio.h>
int main()
{
	int num1 , num2 , quotient , remainder;
	printf("Enter First Integer: ");
	scanf("%d" , &num1);
	printf("Enter Second Integer: ");
	scanf("%d" , &num2);
	
	quotient = num1 / num2;
	remainder = num1 % num2;
	
	printf("Quotient= %d \n" , quotient);
	printf("Remainder= %d" , remainder);
	return 0;	
}
