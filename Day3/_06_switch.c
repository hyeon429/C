#include <stdio.h>

void main6() {
	// 게임
	// 1. 공격 2. 방어 3. 아이템 4. 도망
	int choice;
	printf("무슨 선택을 할까요? ");
	scanf("%d", &choice);
	// switch (비교기준) {}
	switch (choice) {
	case 1:
		printf("공격\n");
		break;
	case 2:
		printf("방어\n");
		break;
	case 3:
		printf("아이템\n");
		break;
	case 4:
		printf("도망\n");
		break;
	default:
		printf("잘못 선택\n");
	}



}