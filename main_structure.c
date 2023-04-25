#include <stdio.h>
#include <stdlib.h>

struct carshop
{
	int cs , year ;
	char name[50];
	char ch;
};
int main()
{
	int i;
	struct carshop v[i] ;
	for(i=1;i<=10;i++)	
	{
	scanf("%s" ,&v[i].name);
    printf("Name:%s\n", v[i].name);
    scanf("%d" ,&v[i].cs);
    printf("Price of Car:%d\n",v[i].cs);
    scanf("%d" ,&v[i].year);
    printf("Manufacturing year:%d\n",v[i].year);
}
	return 0;
}
