#include <stdio.h>

void main2() {
	// 자주 사용할 것 같은 데이터는 저장해놓기 : 변수
	char name = 'wow';				//글자 저장공간
	int number = 123;				//숫자 저장공간
	float number2 = 3.14f;			//소수점 있는 숫자 저장공간

	// 변수 : 저장공간 
	// 저장공간의 형태 저장공간이름 = 저장할 값;

	printf("hello %c\n", name);			// 글자 입력
	printf("hello %d\n", number);		// 숫자 출력
	printf("hello %f\n", number2);		// 소수점 있는 숫자 출력
	printf("hello %c", name);
	// %c : 한글자
	// %d : 숫자
	// %f : 소수점이 있는 숫자
	// %s : 여러글자

}