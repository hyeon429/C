#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main6() {
	// for�� ����� 1~10���� ���
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i + 1);
	}
	// for�� ����� 1~10������ ��
	int sum1 = 0;
	for (int i = 0; i < 10; i++)
	{
		sum1 += (i + 1);
	}
	printf("1~10������ ���� %d�Դϴ�.\n", sum1);

	// ���� �Է¹ް� �հ踦 ���Ͻÿ�
	int num1;
	int sum2 = 0;
	printf("����� �� ���ұ��?\n");
	scanf("%d", &num1);
	for (int a = 0; a < num1; a++)
	{
		sum2 += (a + 1);
	}
	printf("1~%d������ ���� %d�Դϴ�.\n", num1,sum2);
}