#include <stdio.h>

void main0() {

	// ���ǹ� : if~else, switch~case~break
	// ���� : if () {}
	//		  switch () {}
	int num1 = 10;

	if (num1 == 0) {
		printf("���ڴ� 0�� ����.\n");
	}
	else if (num1 == 10) {
		printf("���ڴ� 10�� ����.\n");
	}
	else if (num1 == 20) {
		printf("���ڴ� 20�� ����.\n");
	}
	else {
		printf("��ġ�ϴ� ���ڰ� ����.\n");
	}

	switch (num1) {
	case 0: 
		printf("���ڴ� 0�� ����.\n");
		break;
	case 10:
		printf("���ڴ� 10�� ����.\n");
		break;
	case 20:
		printf("���ڴ� 20�� ����.\n");
		break;
	default:
		printf("��ġ�ϴ� ���ڰ� ����.\n");
	}
}