#include <stdio.h>

void main8() {
	// 중첩 반복문 : 반복문 내부에 반복문 사용 가능
					// 조건문 내부에 조건문 사용 가능
					// 반복문 내부에 조건문 사용 가능
					// 조건문 내부에 반복문 사용 가능
	
	// 반복문 안에서 조건문 사용
	for (int i = 0; i < 3; i++)
	{
		if (i == 0) {
			printf("시작\n");
		}
		printf("%d\n", i);
	}
	// 반복문 안에서 반복문 사용
	for (int i = 0; i < 3; i++)
	{
		printf("시작%d\n",i+1);
		for (int j = 0; j < 3; j++) {

			printf("%d\n", j+1);
		}
		printf("끝%d\n",i+1);
	}
}