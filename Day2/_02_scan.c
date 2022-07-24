#include <stdio.h>

void main2() {
	int num1;
	float num2;
	char name1;
	char name2[100];
	printf("입력하시오\n");
	scanf("%d", &num1);
	printf("정수는 %d입니다.\n", num1);
	scanf("%f", &num2);
	printf("실수는 %.2f입니다.\n", num2);
	//scanf("%c", &name1);
	//printf("한 글자는 %c\n", name1);
	scanf("%s", &name2);
	printf("문자열은 %s입니다.\n", name2);
}
