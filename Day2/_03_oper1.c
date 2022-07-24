#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
	char name[50];
	// 학습지 사칙연산1
	//printf("1+1 = ");
	//scanf("%d", &num1);
	//printf("1+1 = %d\n", num1);
	// 이름을 입력
	printf("이름을 적으시오 : ");
	scanf("%s", &name);
	printf("이름을 적으시오 : %s\n", &name);

	// 학습지 사칙연산2
	printf("20 + 30 = ");
	scanf("%d", &num2);
	
	printf("50 - 30 = ");
	scanf("%d", &num3);
	
	printf("5 × 6 = ");
	scanf("%d", &num4);

	printf("20 ÷ 5 = ");
	scanf("%d", &num5);

	printf("정답 : \n");
	printf("20 + 30 = %d\n", num2);
	printf("50 - 30 = %d\n", num3);
	printf("5 × 6 = %d\n", num4);
	printf("20 ÷ 5 = %d\n", num5);
}