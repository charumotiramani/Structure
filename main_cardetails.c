#include<stdio.h>
#include <string.h>

struct car_shop
{
	char name[20];
	int year;
	float cost;
	char category;
};

int main()
{
	struct car_shop x;
	memcpy(x.name, "Maruti Suzuki", 13);
	x.year=1999;
	x.cost=100000.00;
	x.category='M';
	printf("Car Name: %s \nManufacturing Year: %d \nCost: %f \nCategory: %c",x.name,x.year,x.cost,x.category);
	return 0;
}
