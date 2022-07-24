#include <stdio.h>

void main() {
	int num1 = 0;
	char name[50];
	// 학습지 사칙연산1
	printf("이름을 적으시오 : ");
	scanf("%s", &name);
	printf("이름을 적으시오 : %s\n", &name);

	printf("20 + 30 = ");
	scanf("%d", &num1);
	(num1 == 50) ? printf("정답\n") : printf("오답\n");

	printf("50 - 30 = ");
	scanf("%d", &num1);
	(num1 == 20) ? printf("정답\n") : printf("오답\n");

	printf("5 × 6 = ");
	scanf("%d", &num1);
	(num1 == 30) ? printf("정답\n") : printf("오답\n");

	printf("20 ÷ 5 = ");
	scanf("%d", &num1);
	(num1 == 4) ? printf("정답\n") : printf("오답\n");



}