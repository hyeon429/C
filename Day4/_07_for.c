#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main7() {

	//for (int i = 0; i < 9; i++)
	//{
	//	printf("2 × %d = %d\n", i+1, 2 * (i+1));
	//}

	int step = 0;
	printf("몇 단을 출력할까요?\n");
	scanf("%d", &step);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d × %d = %d\n", step, i, step * i);
	}

}