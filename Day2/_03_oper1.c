#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
	char name[50];
	// �н��� ��Ģ����1
	//printf("1+1 = ");
	//scanf("%d", &num1);
	//printf("1+1 = %d\n", num1);
	// �̸��� �Է�
	printf("�̸��� �����ÿ� : ");
	scanf("%s", &name);
	printf("�̸��� �����ÿ� : %s\n", &name);

	// �н��� ��Ģ����2
	printf("20 + 30 = ");
	scanf("%d", &num2);
	
	printf("50 - 30 = ");
	scanf("%d", &num3);
	
	printf("5 �� 6 = ");
	scanf("%d", &num4);

	printf("20 �� 5 = ");
	scanf("%d", &num5);

	printf("���� : \n");
	printf("20 + 30 = %d\n", num2);
	printf("50 - 30 = %d\n", num3);
	printf("5 �� 6 = %d\n", num4);
	printf("20 �� 5 = %d\n", num5);
}