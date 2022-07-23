#include <stdio.h>

void main7() {
	// 같다 : ==
	// 다르다 : !=
	// 크거나 같다 : <= or >=
	
	// 비교 연산자의 결과 : 틀리면->0, 맞으면->0이외의 값(대표적으로1)
	int result1 = 1 == 1;
	printf("%d\n", result1);		//1
	int result2 = 2 != 1;
	printf("%d\n", result2);		//1
	int result3 = 2 <= 1;
	printf("%d\n", result3);		//0

	


}