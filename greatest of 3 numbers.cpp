/*to print the greatest of three numbers*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	printf("A is greater");
	else if (b>c)
	printf("B is greater");
	else
	printf("C is greater");
	
	
}
