#include <stdio.h>

// 함수 : 개발자가 직접 만드는 기능
// 연산자 : 프로그래밍 언어가 지원해주는 기능(+,-,==,>=,...)
// 함수 만드는 형식
// 자료형 함수명() {}

// ======================================================Day5._06_func.c 절대값 문제A====================================================
void AbsPlus(int num1, int num2) {				// 정수 2개를 전달받는 함수
	int num3 = 0, num4 = 0, result = 0;			// AbsPlus 안에서 만든 변수는 함수가 끝나면 사라짐(지역변수-임시적으로 존재)
	if (num1 < 0) {
		num3 = num1 * (-1);						// num1이 음수면 양수로 바꿔 num3에 넣는다.
	}
	else {
		num3 = num1;							// num1이 양수면 그대로 num3에 넣는다.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);						// num2가 음수면 양수로 바꿔 num4에 넣는다.
	}
	else {
		num4 = num2;							// num2가 양수면 그대로 num4에 넣는다.
	}
	result = num3 + num4;
	printf("%d\n", result);						// 더하기 기능과는 상관없지만 출력을 위해 임시로 넣음

}

void AbsMinus(int num1, int num2) {				// 정수 2개를 전달받는 함수
	int num3 = 0, num4 = 0, result = 0;			// AbsPlus 안에서 만든 변수는 함수가 끝나면 사라짐(지역변수-임시적으로 존재)
	if (num1 < 0) {
		num3 = num1 * (-1);						// num1이 음수면 양수로 바꿔 num3에 넣는다.
	}
	else {
		num3 = num1;							// num1이 양수면 그대로 num3에 넣는다.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);						// num2가 음수면 양수로 바꿔 num4에 넣는다.
	}
	else {
		num4 = num2;							// num2가 양수면 그대로 num4에 넣는다.
	}
	result = num3 - num4;
	printf("%d\n", result);						// 빼기 기능과는 상관없지만 출력을 위해 임시로 넣음
// ============================================================================================================================================
}
// =============숫자 3개를 만들어 더하는 함수=====================
void Plus3(int num1, int num2, int num3) {
	int result = num1 + num2 + num3;
	printf("%d", result);
}
	
int main0() {
	// 프로젝트를 실행하면 main 함수를 실행한다.
	AbsPlus(3, 4);								// 함수를 사용할 땐 \n을 사용할 필요가 없움
				
	AbsPlus(-3,4);
	
	AbsPlus(3, -4);

	AbsPlus(-3, -4);

	AbsMinus(3, 4);
	
	AbsMinus(-3, 4);

	AbsMinus(3, -4);

	AbsMinus(-3, -4);

	Plus3(3, 4, 5);

	return 0;
}
