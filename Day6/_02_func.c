#include <stdio.h>

// Plus : ���� 2�� ���ϱ�
int Plus(int n1, int n2) {
	return n1 + n2;
}
// Minus : ���� 2�� ����
int Minus(int n1, int n2) {
	return n1 - n2;
}
// Mul : ���� 2�� ���ϱ�
int Mul(int n1, int n2) {
	int result = n1 * n2;
	return result;
}
// Div : ���� 2�� ������
double Div(double n1, int n2) {			// �������� ������ ���� ���� �����Ƿ� �� ���� �Ǽ��� �ٲ���
	double result = n1 / n2;
	return result;
}

int main2() {

	int plus_result = 0;
	int minus_result = 0;
	int mul_reuslt = 0;
	double div_result = 0;

	// �Լ� ���
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