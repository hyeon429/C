#include <stdio.h>

void main0() {

	// ��� : if, switch, while, for, ...
	
	// ���ǹ�
	
	// if ()  {} : ()�ȿ� ������ ������ {}���� ����, ������ Ʋ���� {}���� ����
	// form : if~else if~else
	if (1 == 1) {
		printf("1 equals 1\n");
	}
	// c���� 0�� Ʋ���ٴ� ǥ��, 1�� �´ٴ� ǥ��
	if (0) {
		printf("ignore\n");
	}
	else if (1)
		printf("follow\n");
	else {
		printf("ignore\n");
	}

	int age = 20;
	if (age < 10) {
		printf("child\n");
	}
	else if (age < 20) {
		printf("teenager\n");
	}
	else {
		printf("adult\n");
	}

	// switch () {} : ()�ȿ� ������ case�� ���ٸ� �ش� case���� ����
	// form : switch~case~break
	switch (age/10) {
	case 0:
		printf("child\n");
		break;
	case 1:
		printf("teenager\n");
		break;
	case 2:
		printf("younger\n");
		break;
	default:
		printf("senior\n");
	}

	// �ݺ���
	
	// while () {} : ()�ȿ� ������ ������ {}�� �����ϰ� ()�� �ǵ��ư�, Ʋ�� ������ ����
	int flag = 0;
	while (flag < 3) {
		flag++;
		printf("hello\n");
	}
	printf("������ : %d\n", flag);

	// for () {} : ()
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("hello \n");

	}
	   printf("������ : %d\n", i);





}


