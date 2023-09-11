/*type of triangle*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides of triangle");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c && a==c)
	printf("Equilateral triangle");
	else if(a==b || b==c || a==c && a!=b || b!=c || a!=c)
	printf("Isoceles triangle");
	else
	printf("Scalene triangle");
}
