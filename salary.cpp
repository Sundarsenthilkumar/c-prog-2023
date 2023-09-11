/*salary*/
#include<stdio.h>
int main()
{
	int b, hra, da, ta, gross,t;
	printf("enter basic salary");
	scanf("%d", &b);
	da=(44%b)/100;
	ta=(8%b)/100;
	
	printf("aTier1 city \nbTier2 city \nctier3city");
	scanf("%d", &t);
	if(t==1)
	hra=(24*b)/100;
	else if(t==2)
	hra=(16*b)/100;
	else
	hra=(12*b)/100;
	gross=b+hra+da+ta;
	printf("The gross salary is %d",gross);

}
	
