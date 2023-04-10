#include <stdio.h>
#include <stdlib.h>

struct car_shop
{
	char name[20];
	int year;
	float cost;
	char category[10];
};

int main()
{
	struct car_shop x[4];
	
	printf("Name: ");
	scanf("%s",&x[0].name);
	printf("Manufacturing Year: ");
	scanf("%d",&x[1].year);
	printf("Cost: ");
	scanf("%f",&x[2].cost);
	printf("Category(H/M/L): ");
	scanf("%s",&x[3].category);
		
	printf("\nCar Name: %s \nManufacturing Year: %d \nCost: %f \nCategory: %s \n\n ",x[0].name,x[1].year,x[2].cost,x[3].category);
	
	return 0;
}
	
	
	

