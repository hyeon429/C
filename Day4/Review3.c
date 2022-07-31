#include <stdio.h>

void main0() {

	// 조건문 : if~else, switch~case~break
	// 형식 : if () {}
	//		  switch () {}
	int num1 = 10;

	if (num1 == 0) {
		printf("숫자는 0과 같다.\n");
	}
	else if (num1 == 10) {
		printf("숫자는 10과 같다.\n");
	}
	else if (num1 == 20) {
		printf("숫자는 20과 같다.\n");
	}
	else {
		printf("일치하는 숫자가 없다.\n");
	}

	switch (num1) {
	case 0: 
		printf("숫자는 0과 같다.\n");
		break;
	case 10:
		printf("숫자는 10과 같다.\n");
		break;
	case 20:
		printf("숫자는 20과 같다.\n");
		break;
	default:
		printf("일치하는 숫자가 없다.\n");
	}
}