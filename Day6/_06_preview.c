#include <stdio.h>

int function3(int*p_num) {
	int num = 3333;		// ��������
	*p_num = num;		// �Ѱܹ��� ��ġ���ٰ� num���� ����

	return 0;
}

int function4(int num) {
	int num3 = 0;
	printf("%d\n", num);
	


}
int main6() {
	// ������ : c�� ����ϴ� ����
	int num = 0;
	int* p_num = &num;		// num ��ġ�� �����ϰ�
	function3(p_num);		// ��ġ�� �Ѱܼ�
	function4(num);

	printf("%d\n", *p_num);
	return 0;

}