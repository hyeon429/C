#include <stdio.h>

void add3(int num1, int num2, int num3) {
	printf("%d", num1 + num2 + num3);
}
// SumNOne : �� ���ڸ� ���� �� + 1
void SumNOne(int n, int m) {
	int result = n + m + 1;
	printf("%d\n", result);
}
void DivNotZero(int i, int j) {
	// 0���� ������ �� ��� �� �� ��
	if (j != 0) {
		int result = i / j;
		printf("%d\n", result);
	}
	else {
		printf("0���δ� ���� �� �����ϴ�.\n");
	}
	
}

void main5() {
	// ������ : �� �����ϴ� ��� (+,-,*,/,%,=,>,...)
	// �Լ� : �����ڰ� ���� ���� ���

	// �Լ� ����� ��� :
	// �ڷ��� �Լ���(){}
	// () : ����ϴ� ������ ���� ���� ������ �������� ������ ����
	// {} : ����
	
	// �ѹ��� 3���� ���ϴ� ����� ���� ������ ����� (������ 2�������� ����)
	// add3 : �ѹ��� 3���� ���ϴ� ��ȣ(�Լ�)
	add3(2, 3, 4);
	printf("\n");
	add3(1, 2, 3);
	printf("\n");
	
	// ���� 2���� �Է¹޾� ���ϰ� +1�� ���ִ� ���
	SumNOne(1, 1);


	DivNotZero(10, 2);
	printf("\n");
	DivNotZero(10, 0);
	printf("\n");



}