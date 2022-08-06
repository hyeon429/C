#include <stdio.h>

void main3() {

	// 반복문을 제어하는 명령어 : break, continue
	// continue : 반복문 처음으로 돌어가기 (1회성 취소)

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		printf("%d \n", i);

	}

}