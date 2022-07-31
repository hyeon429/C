#include <stdio.h>

void main2() {
	// 반복문 : for, while
	// while (조건) {
	//		조건이 맞을 때마다 수행할 문장;
	// }
	int i = 0;							// 1. 기준점을 세운다. 
	while (i < 5) {						// 2. while을 사용
		printf("안녕\n");				// 3. ()에는 기준을 {}에는 내용을 넣음
		i++;							// 4. 기준점 증감시킴
	}
	printf("끝남\n");	

}