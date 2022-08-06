#include <stdio.h>

void main2() {

	// 반복문을 제어하는 명령어 : break, continue
	// break : 반복문 즉시 종료 ( 대개 if와 같이 사용 )

	int flag = 0;
	while (1) {
		flag++;
		printf("%d \n", flag);

		if (flag == 500) {
			break;			
		}
	}

}