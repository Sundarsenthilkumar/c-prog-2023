/* best of the 3*/
# include <stdio.h>
int main()
{
	int i1, i2, i3;
	printf("Enter the three inputs");
	scanf("%d %d %d", &i1, &i2, &i3);
	if (i1>i2 && i1>i3)
	printf("%d", i1);
	else if (i2>i3)
	printf("%d", i2);
	else
	printf("%d", i3);
}
