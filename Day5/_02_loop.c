#include <stdio.h>

void main2() {

	// �ݺ����� �����ϴ� ��ɾ� : break, continue
	// break : �ݺ��� ��� ���� ( �밳 if�� ���� ��� )

	int flag = 0;
	while (1) {
		flag++;
		printf("%d \n", flag);

		if (flag == 500) {
			break;			
		}
	}

}