#include <stdio.h>

void main4() {
	int num = 0;

	// 누적 연산자
	num = 3;
	num += 5;
	printf("%d\n", num);
	// +=	
	// -=
	// *=
	// /=
	num += 1;		// 1 누적 덧셈 ==> num++;(증감연산자)
	num -= 1;		// 1 누적 뻴셈 ==> num--;

}