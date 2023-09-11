/*to find avg and grade students*/
#include<stdio.h>
int main()
{
	int p, c, b, m, cs, avg, per;
	printf("input marks of student out of 100");
	scanf("%d %d %d %d %d", &p, &c, &b, &m, &cs);
	avg=p+c+b+m+cs;
	per=(avg/5);
	printf("Your percentage is %d", per);
	if(per>90)
	printf("A grade");
	else if(per>80)
	printf("B grade");
	else if (per>70)
	printf("C grade");
	else if (per>60)
	printf("D grade");
	else
	printf("F grade");
	
}
