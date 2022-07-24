#include <stdio.h>

void main6() {
	// 삼항 연산자 :  조건에 따라 동작을 다르게
	// 비교 연산자 ? 맞을 때 : 틀릴 때;
	(1 == 1) ? printf("1과 1은 같다.\n") : printf("1과 1은 다르다.\n");

	int age = 16;
	(age >= 20) ? printf("성인\n") : printf("미자\n");

}