/* leap year or not*/
#include <stdio.h>
int main()
{
	int year, x, month, days;
	printf("Enter a year");
	scanf("%d", &year);
	if(year%4==0 && (year%100!=0 || year%400==0))
	x==1;
	else
	x=2;
	



    printf("enter month number");
    scanf("%d", month);
    if (month==2 && x==1)
    days=28;
    
    else if (month==2 && x!=1)
    days=30;
    
    else if (month%2==1)
    days=31;
    
	else
	days=30;
	
	printf("The number of days is %d", &days);
	
}
