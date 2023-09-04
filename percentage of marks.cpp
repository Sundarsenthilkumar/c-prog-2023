#include <stdio.h>
int main()
{
	int a,b,c,d,e,per;
	printf("Enter 5 subject marks out of 100");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	per=(a+b+c+d+e)/5;
	printf("The percentage of the student is %d %%", per);
	
	
}
