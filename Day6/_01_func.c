#include <stdio.h>

// �Լ�
// ���� : �ڷ��� ������(�Է¹��� ��) {����}

void func1() {
	printf("�Լ� 1 ���\n");
	// void : ���� �� ����
	// {} : ������ ���� �� ����
}

void func2(int num) {
	printf("�Լ� 2 ���\n");
	// void : ���� �� ����
	// {} : int ������ �ϳ� ������ ����� �� ���� �� �ϳ��� �־���� ��

}

void func3(char c) {
	printf("�Լ� 3 ���\n");
	// void : ���� �� ����
	// {} : char ������ �ϳ� ������ ����� �� ���� �ϳ��� �־���� ��
}

void func4(int n1,int n2) {
	printf("%d\n", n1 + n2);
}

int func5(int num1, int num2) {
	int result = num1 + num2;
	return result;				// ����� ������ return(���� ��) ���� ���� ����
}
char func6(int num) {
	if (num >= 0) {
		return 'Y';
	}
	else {
		return'N';
	}
}



int main1() {

	func1();					// �������� �ֵ� ����

	func2(123);					// int ������ �ϳ� ������ ���� �� ���� ����

	func3('i');					// ���� ���� �� �� ����

	func4(1, 2);				// 3
	
	int num1 = 5 + 10;			// 15
	int num = func5(5, 10);		// 15
	printf("%d\n", 5 + 10);
	printf("%d\n", func5(5 , 10));

	printf("%c\n", func6(5));
	printf("%c\n", func6(-5));

	// ����� �� �Ѱ��ִ� ���� ()��, ��� �Ŀ� �Ѱܹ��� ���� return�� ������.
	char a = '\0';
	a = func6(-3);
	a = 'N';

	
	
	return 0;

}

