#define _CRT_SECURE_NO_WARNINGS		// #define : ��ó����, ������
#include <stdio.h>					// #include : ���� �����ϱ�, �ش� ���Ͽ� �ִ� �ڵ尡 �ִ� ������ ���
void main1() {
	int year = 0;
	printf("�⵵�� �Է��Ͻÿ�\n");
	scanf("%d", &year);

	// ���⿩�� ���
	// ���� : 4�� ����̸鼭 100�� ����� �ƴ�, Ȥ�� 400�� ��� ex) 2������ 29�Ͽ� ����, ������ 28��
	
	// if
	if (year % 4 == 0 && year > 0) {
		if (year % 400 == 0) {
			printf("�����Դϴ�.\n");
		}
		else if (year % 100 != 0) {
			printf("�����Դϴ�.\n");
		}
		else {
			printf("������ �ƴմϴ�. \n");
		}
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}

	// switch
	switch (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	case 1:
		printf("�����Դϴ�.\n");
		break;
	case 0:
		printf("������ �ƴմϴ�.\n");
		break;
	}
}