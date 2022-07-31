#define _CRT_SECURE_NO_WARNINGS		// #define : 전처리기, 설정값
#include <stdio.h>					// #include : 파일 포함하기, 해당 파일에 있는 코드가 있는 것으로 취급
void main1() {
	int year = 0;
	printf("년도를 입력하시오\n");
	scanf("%d", &year);

	// 윤년여부 출력
	// 윤년 : 4의 배수이면서 100의 배수가 아님, 혹은 400의 배수 ex) 2월달이 29일에 끝남, 원래는 28일
	
	// if
	if (year % 4 == 0 && year > 0) {
		if (year % 400 == 0) {
			printf("윤년입니다.\n");
		}
		else if (year % 100 != 0) {
			printf("윤년입니다.\n");
		}
		else {
			printf("윤년이 아닙니다. \n");
		}
	}
	else {
		printf("윤년이 아닙니다.\n");
	}

	// switch
	switch (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	case 1:
		printf("윤년입니다.\n");
		break;
	case 0:
		printf("윤년이 아닙니다.\n");
		break;
	}
}