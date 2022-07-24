#include <stdio.h>

void main1() {
	// 출력 printf
	// 입력 scanf
	// 보안 검사 해제를 위해 sdl 검사를 '아니오'로 바꿈
	// => 상단의 프로젝트 -> 속성 -> c/c++ -> sdl검사 '아니오'
	// 입력을 위해선 입력한 값을 저장해놓을 공간이 필요(변수)
	int num1 = 0;
	printf("%d입니다.\n", num1);

	// 입력
	printf("숫자를 입력하시오\n");
	scanf("%d", &num1);
	printf("내가 입력한 값은 %d입니다.\n", num1);


}