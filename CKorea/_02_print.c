#include <stdio.h>

void main2() {
	// ���� ����� �� ���� �����ʹ� �����س��� : ����
	char name = 'wow';				//���� �������
	int number = 123;				//���� �������
	float number2 = 3.14f;			//�Ҽ��� �ִ� ���� �������

	// ���� : ������� 
	// ��������� ���� ��������̸� = ������ ��;

	printf("hello %c\n", name);			// ���� �Է�
	printf("hello %d\n", number);		// ���� ���
	printf("hello %f\n", number2);		// �Ҽ��� �ִ� ���� ���
	printf("hello %c", name);
	// %c : �ѱ���
	// %d : ����
	// %f : �Ҽ����� �ִ� ����
	// %s : ��������

}