#include <stdio.h>

// �Լ� : �����ڰ� ���� ����� ���
// ������ : ���α׷��� �� �������ִ� ���(+,-,==,>=,...)
// �Լ� ����� ����
// �ڷ��� �Լ���() {}

// ======================================================Day5._06_func.c ���밪 ����A====================================================
void AbsPlus(int num1, int num2) {				// ���� 2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;			// AbsPlus �ȿ��� ���� ������ �Լ��� ������ �����(��������-�ӽ������� ����)
	if (num1 < 0) {
		num3 = num1 * (-1);						// num1�� ������ ����� �ٲ� num3�� �ִ´�.
	}
	else {
		num3 = num1;							// num1�� ����� �״�� num3�� �ִ´�.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);						// num2�� ������ ����� �ٲ� num4�� �ִ´�.
	}
	else {
		num4 = num2;							// num2�� ����� �״�� num4�� �ִ´�.
	}
	result = num3 + num4;
	printf("%d\n", result);						// ���ϱ� ��ɰ��� ��������� ����� ���� �ӽ÷� ����

}

void AbsMinus(int num1, int num2) {				// ���� 2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;			// AbsPlus �ȿ��� ���� ������ �Լ��� ������ �����(��������-�ӽ������� ����)
	if (num1 < 0) {
		num3 = num1 * (-1);						// num1�� ������ ����� �ٲ� num3�� �ִ´�.
	}
	else {
		num3 = num1;							// num1�� ����� �״�� num3�� �ִ´�.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);						// num2�� ������ ����� �ٲ� num4�� �ִ´�.
	}
	else {
		num4 = num2;							// num2�� ����� �״�� num4�� �ִ´�.
	}
	result = num3 - num4;
	printf("%d\n", result);						// ���� ��ɰ��� ��������� ����� ���� �ӽ÷� ����
// ============================================================================================================================================
}
// =============���� 3���� ����� ���ϴ� �Լ�=====================
void Plus3(int num1, int num2, int num3) {
	int result = num1 + num2 + num3;
	printf("%d", result);
}
	
int main0() {
	// ������Ʈ�� �����ϸ� main �Լ��� �����Ѵ�.
	AbsPlus(3, 4);								// �Լ��� ����� �� \n�� ����� �ʿ䰡 ����
				
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