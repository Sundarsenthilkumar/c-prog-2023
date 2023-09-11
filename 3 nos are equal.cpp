/*3 nos are equal or not*/
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("ENter three numbers");
	scanf("%d %d %d", &a, &b, &c);
	if (a==b && b==c && a==c)
	printf("Three numbers are equal");
	else
	printf("Not equal");
	
}
