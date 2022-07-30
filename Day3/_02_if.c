#include <stdio.h>

void main2() {
	int age;
	printf("나이를 입력하세요 >> ");
	scanf("%d", &age);
	if (0 < age && age < 10) {
		printf("어린이입니다.");
	}
	else if (age <= 19) {
		printf("10대입니다.");
	}
	else if (age <= 29) {
		printf("20대입니다.");
	}
	else if (!(30 > age)) {
		printf("30대 이상입니다.");
	}
}