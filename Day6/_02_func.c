#include <stdio.h>

// Plus : 숫자 2개 더하기
int Plus(int n1, int n2) {
	return n1 + n2;
}
// Minus : 숫자 2개 빼기
int Minus(int n1, int n2) {
	return n1 - n2;
}
// Mul : 숫자 2개 곱하기
int Mul(int n1, int n2) {
	int result = n1 * n2;
	return result;
}
// Div : 숫자 2개 나누기
double Div(double n1, int n2) {			// 정수끼리 나누면 정수 값이 나오므로 한 값을 실수로 바꿔줌
	double result = n1 / n2;
	return result;
}

int main2() {

	int plus_result = 0;
	int minus_result = 0;
	int mul_reuslt = 0;
	double div_result = 0;

	// 함수 사용
	plus_result = Plus(1, 2);
	minus_result = Minus(2, 3);
	mul_reuslt = Mul(3, 4);
	div_result = Div(4.3, 5.9);
	//

	printf("%d\n", plus_result);
	printf("%d\n", minus_result);
	printf("%d\n", mul_reuslt);
	printf("%.1lf\n", div_result);

	return 0;
}