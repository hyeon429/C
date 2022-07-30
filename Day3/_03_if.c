#include <stdio.h>

void main3() {
	// 나이를 입력 받아 
	// 14세 미만이면 어린이 - 요금 500원
	// 14-19세는 청소년	    - 요금 750원
	// 20세 이상은 성인		- 요금 1000원

	int age;
	int price1 = 500;
	int price2 = 750;
	int price3 = 1000;

	printf("카드를 찍으시오\n");
	scanf("%d", &age);

	if (0 < age && age < 14) {
		printf("어린이입니다. 요금은 %d원입니다.\n", price1);
	}
	else if (age <= 19) {
		printf("청소년입니다. 요금은 %d원입니다.\n", price2);
	}
	else if (!(age < 20)) {			// 마지막은 else만 써도 가능 (그밖에 나머지일 경우)
		printf("성인입니다. 요금은 %d원입니다.\n", price3);
	}
}