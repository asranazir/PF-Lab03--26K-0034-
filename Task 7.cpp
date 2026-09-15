#include <stdio.h>
int main()
{
	char city[50] , country[50];
	char grade;
	int population;
	float area;
	printf("Enter your Country: ");
	scanf("%s" , &country);
	
	printf("Enter your City: ");
	scanf("%s" , &city);
	
	printf("Enter your Population: ");
	scanf("%d" , &population);
	
	printf("Enter your Area:");
	scanf("%f" , &area);
	
	printf("Enter your Grade: ");
	scanf(" %c", &grade);
	
	printf("You live in %s,%s \n" , city,country);
	printf("Population: %d \n " , population );
	printf("Area: %2.f \n" , area );
	printf("Grade: %c" , grade );		
	return 0;	
}
