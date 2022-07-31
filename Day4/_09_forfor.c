#include <stdio.h>

void main() {

	for (int k = 2; k < 10; k++)
	{
		printf("====%d단====\t",k);
	}
	printf("\n");

	// 구구단 만들기
	for (int i = 1; i < 10; i++){
		for (int j = 2; j < 10; j++){
			printf("%d x %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}

}