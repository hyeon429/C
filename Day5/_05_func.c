#include <stdio.h>

void add3(int num1, int num2, int num3) {
	printf("%d", num1 + num2 + num3);
}
// SumNOne : 두 숫자를 더한 후 + 1
void SumNOne(int n, int m) {
	int result = n + m + 1;
	printf("%d\n", result);
}
void DivNotZero(int i, int j) {
	// 0으로 나누는 건 계산 안 할 것
	if (j != 0) {
		int result = i / j;
		printf("%d\n", result);
	}
	else {
		printf("0으로는 나눌 수 없습니다.\n");
	}
	
}

void main5() {
	// 연산자 : 언어가 제공하는 기능 (+,-,*,/,%,=,>,...)
	// 함수 : 개발자가 직접 만든 기능

	// 함수 만드는 방법 :
	// 자료형 함수명(){}
	// () : 사용하는 곳에서 받은 값을 저장할 공간들을 마련해 놓기
	// {} : 동작
	
	// 한번에 3개를 더하는 기능을 가진 연산자 만들기 (원래는 2개까지만 가능)
	// add3 : 한번에 3개를 더하는 기호(함수)
	add3(2, 3, 4);
	printf("\n");
	add3(1, 2, 3);
	printf("\n");
	
	// 슷자 2개를 입력받아 더하고 +1을 해주는 기능
	SumNOne(1, 1);


	DivNotZero(10, 2);
	printf("\n");
	DivNotZero(10, 0);
	printf("\n");



}