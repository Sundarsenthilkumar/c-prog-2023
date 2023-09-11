/*electricity bill*/
#include <stdio.h>
int main()
{
	int unit, price;
	printf("Enter the number of units used");
	scanf("%d", &unit);
	if(unit<100)
	price=unit*4.50;
	
    
    else if (unit>100 && unit<500)
    price=unit*4;
    else
    price=unit*3;
    printf("%d the price is", price);
	
	
}
