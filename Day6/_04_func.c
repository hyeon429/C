#include <stdio.h>

int g_num = 1;			// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����

int func1_()
{
	int num2 = 314;		// �������� : ������� �߰�ȣ�� ����� ������ �����
	return num2;
}

float func2_(int num) {
	int num3 = 0;
	printf("%d\n", num);
	return 0.0f;
}

int main4() {

	int num1 = 0;
	num1 = func1_();
	func2_(num1);
	//printf("%d\n", num1);
	//printf("%d\n", num2);
	//printf("%d\n", num3);
	//printf("%d\n", g_num);	//


	return 0;
}