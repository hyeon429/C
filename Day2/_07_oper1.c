#include <stdio.h>

void main() {
	int num1 = 0;
	char name[50];
	// �н��� ��Ģ����1
	printf("�̸��� �����ÿ� : ");
	scanf("%s", &name);
	printf("�̸��� �����ÿ� : %s\n", &name);

	printf("20 + 30 = ");
	scanf("%d", &num1);
	(num1 == 50) ? printf("����\n") : printf("����\n");

	printf("50 - 30 = ");
	scanf("%d", &num1);
	(num1 == 20) ? printf("����\n") : printf("����\n");

	printf("5 �� 6 = ");
	scanf("%d", &num1);
	(num1 == 30) ? printf("����\n") : printf("����\n");

	printf("20 �� 5 = ");
	scanf("%d", &num1);
	(num1 == 4) ? printf("����\n") : printf("����\n");



}