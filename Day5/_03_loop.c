#include <stdio.h>

void main3() {

	// �ݺ����� �����ϴ� ��ɾ� : break, continue
	// continue : �ݺ��� ó������ ����� (1ȸ�� ���)

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		printf("%d \n", i);

	}

}