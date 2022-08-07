#include <stdio.h>

int function3(int*p_num) {
	int num = 3333;		// 지역변수
	*p_num = num;		// 넘겨받은 위치에다가 num값을 대입

	return 0;
}

int function4(int num) {
	int num3 = 0;
	printf("%d\n", num);
	


}
int main6() {
	// 포인터 : c언어를 사용하는 이유
	int num = 0;
	int* p_num = &num;		// num 위치를 저장하고
	function3(p_num);		// 위치를 넘겨서
	function4(num);

	printf("%d\n", *p_num);
	return 0;

}