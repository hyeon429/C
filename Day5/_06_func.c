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
// ================================================= ���밪 ����Q==========================================
// ���� 2���� �Է¹޾� ���� ���밪���� ����� ���ϱ�
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
// ���� 2���� �Է¹޾� ���� ���밪���� ����� ����
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
// ===========================================>>> ������ ������ ������ �Ѽ����� �ʰ� ���ο� ���� ����

// c����� �������� main �Լ��̴�.
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