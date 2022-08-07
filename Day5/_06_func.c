#include <stdio.h>

// Sum
void Sum(int n1, int n2) {
	int result = n1 + n2;
	printf("%d\n", result);
}

// Sub
void Sub(int n3, int n4) {
	int result = n3 - n4;
	printf("%d\n", result);
}

// Mul
void Mul(int n5, int n6) {
	int result = n5 * n6;
	printf("%d\n", result);
}

// Div
void Div(int n7, int n8) {
	int result = n7 / n8;
	printf("%d\n", result);
}
// ================================================= 절대값 문제Q==========================================
// 숫자 2개를 입력받아 각각 절대값으로 만들어 더하기
void PosSum(int num1, int num2) {
	if (num1 < 0) {
		num1 *= (-1);
	}
	if (num2 < 0) {
		num2 *= (-1);
	}
	int result = num1 + num2;
	printf("%d\n", result);

}
// 숫자 2개를 입력받아 각각 절대값으로 만들어 빼기
void PosSub(int num3, int num4) {
	if (num3 < 0) {
		num3 *= (-1);
	}
	if (num4 < 0) {
		num4 *= (-1);
	}
	int result = num3 - num4;
	printf("%d\n", result);
}
// ===========================================>>> 가능한 원래의 변수를 훼손하지 않고 새로운 변수 지정

// c언어의 시작점은 main 함수이다.
	int main()
	{
		Sum(2, 2);

		Sub(2, 2);

		Mul(2, 2);

		Div(2, 2);

		PosSum(-3, 2);

		PosSub(-5, -1);

		return 0;
	}