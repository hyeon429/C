#include <stdio.h>

void main1() {
	int sum1 = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i+1);
		sum1 += (i+1);
	}
	printf("sum : %d\n", sum1);
	
}