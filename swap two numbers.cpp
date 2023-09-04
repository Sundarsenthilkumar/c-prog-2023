#include <stdio.h>
int main()
{
	int a,b,t;
	printf("enter 2 numbers");
	scanf("%d %d", &a, &b);
	t=a;
	a=b;
	b=t;
	printf("The swapped a is %d and the swapped b is %d", a, b);
}
