#include <stdio.h>

void main6() {
	// operation : ����
	// ��Ģ����
	int result1 = 1 + 1;
	int result2 = 5 - 1;
	int result3 = 5 * 1;
	int result4 = 5 / 3;
	int result6 = 5 % 3;

	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);
	printf("%d\n", result6);

	int result5 = result1 + result4; //��1=��2 -> ��1:����, ��2:��  
	printf("%d\n", result5);		 //result5 = 3
	
	//���Կ��� = 
	result1 = result5;
	printf("result1�� ���� %d�Դϴ�.", result1);	//result1 = 3

	// ctrl + z : �ǵ�����
	// ctrl + y : �ǵ����� ���
	// ctrl + d : ����
	// alt + �� : �ڵ� ���� �̵�
	// ctrl + shift + a  : �׸��߰�
	// ctrl + s : ����

}