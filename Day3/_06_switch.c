#include <stdio.h>

void main6() {
	// ����
	// 1. ���� 2. ��� 3. ������ 4. ����
	int choice;
	printf("���� ������ �ұ��? ");
	scanf("%d", &choice);
	// switch (�񱳱���) {}
	switch (choice) {
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("���\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("����\n");
		break;
	default:
		printf("�߸� ����\n");
	}



}