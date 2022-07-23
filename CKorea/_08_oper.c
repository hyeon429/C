#include <stdio.h>

void main8() {

	int result1 = 3 - 5;
	printf("3 - 5 = %d\n", result1);
	int result2 = 10 / 2;
	printf("10 ÷ 2 = %d\n", result2);
	float result3 = 10.0 / 2.0;
	printf("10.0 ÷ 2.0 = %.1f\n", result3);
	int result4 = 5 % 2;
	printf("5를 2로 나눈 나머지는 %d입니다.\n", result4);
	int num = 3;
	printf("num이 홀수면 1, 짝수면 0 : %d\n", num % 2);
}