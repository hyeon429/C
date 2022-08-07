#include <stdio.h>

// 함수
// 형식 : 자료형 변수명(입력받을 값) {내용}

void func1() {
	printf("함수 1 사용\n");
	// void : 리턴 값 없음
	// {} : 공백은 받을 값 없음
}

void func2(int num) {
	printf("함수 2 사용\n");
	// void : 리턴 값 없음
	// {} : int 변수가 하나 있으니 사용할 때 정수 값 하나를 넣어줘야 함

}

void func3(char c) {
	printf("함수 3 사용\n");
	// void : 리턴 값 없음
	// {} : char 변수가 하나 있으니 사용할 때 문자 하나를 넣어줘야 함
}

void func4(int n1,int n2) {
	printf("%d\n", n1 + n2);
}

int func5(int num1, int num2) {
	int result = num1 + num2;
	return result;				// 사용한 곳으로 return(값을 줌) 옆의 값을 전달
}
char func6(int num) {
	if (num >= 0) {
		return 'Y';
	}
	else {
		return'N';
	}
}



int main1() {

	func1();					// 공백으로 둬도 가능

	func2(123);					// int 변수를 하나 썼으니 정수 한 개를 전달

	func3('i');					// 문자 값을 한 개 전달

	func4(1, 2);				// 3
	
	int num1 = 5 + 10;			// 15
	int num = func5(5, 10);		// 15
	printf("%d\n", 5 + 10);
	printf("%d\n", func5(5 , 10));

	printf("%c\n", func6(5));
	printf("%c\n", func6(-5));

	// 사용할 때 넘겨주는 값은 ()에, 사용 후에 넘겨받을 값은 return에 적어줌.
	char a = '\0';
	a = func6(-3);
	a = 'N';

	
	
	return 0;

}

