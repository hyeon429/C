#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main6() {
	// for를 사용해 1~10까지 출력
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i + 1);
	}
	// for를 사용해 1~10까지의 합
	int sum1 = 0;
	for (int i = 0; i < 10; i++)
	{
		sum1 += (i + 1);
	}
	printf("1~10까지의 합은 %d입니다.\n", sum1);

	// 값을 입력받고 합계를 구하시오
	int num1;
	int sum2 = 0;
	printf("몇까지 다 더할까요?\n");
	scanf("%d", &num1);
	for (int a = 0; a < num1; a++)
	{
		sum2 += (a + 1);
	}
	printf("1~%d까지의 합은 %d입니다.\n", num1,sum2);
}