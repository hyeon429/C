#include <stdio.h>

void main3() {
	// ���̸� �Է� �޾� 
	// 14�� �̸��̸� ��� - ��� 500��
	// 14-19���� û�ҳ�	    - ��� 750��
	// 20�� �̻��� ����		- ��� 1000��

	int age;
	int price1 = 500;
	int price2 = 750;
	int price3 = 1000;

	printf("ī�带 �����ÿ�\n");
	scanf("%d", &age);

	if (0 < age && age < 14) {
		printf("����Դϴ�. ����� %d���Դϴ�.\n", price1);
	}
	else if (age <= 19) {
		printf("û�ҳ��Դϴ�. ����� %d���Դϴ�.\n", price2);
	}
	else if (!(age < 20)) {			// �������� else�� �ᵵ ���� (�׹ۿ� �������� ���)
		printf("�����Դϴ�. ����� %d���Դϴ�.\n", price3);
	}
}