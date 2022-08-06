#include <stdio.h>

void main4() {
	// break와 continue를 활용
	for (int i = 0; i < 100; i++)
	{
		// 1~50까지 짝수만 실행
		if (i > 50) {
			break;
		}
		if (i % 2 == 1 || i == 0) {
			continue;
		}
		
		printf("%d\n", i);
	}

}