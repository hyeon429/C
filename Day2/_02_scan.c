#include <stdio.h>

void main2() {
	int num1;
	float num2;
	char name1;
	char name2[100];
	printf("�Է��Ͻÿ�\n");
	scanf("%d", &num1);
	printf("������ %d�Դϴ�.\n", num1);
	scanf("%f", &num2);
	printf("�Ǽ��� %.2f�Դϴ�.\n", num2);
	//scanf("%c", &name1);
	//printf("�� ���ڴ� %c\n", name1);
	scanf("%s", &name2);
	printf("���ڿ��� %s�Դϴ�.\n", name2);
}
