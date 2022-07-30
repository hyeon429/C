#include <stdio.h>

void main6() {
	// operation : 연산
	// 사칙연산
	int result1 = 1 + 1;
	int result2 = 5 - 1;
	int result3 = 5 * 1;
	int result4 = 5 / 3;
	int result6 = 5 % 3;

	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);
	printf("%d\n", result6);

	int result5 = result1 + result4; //ㅁ1=ㅁ2 -> ㅁ1:공간, ㅁ2:값  
	printf("%d\n", result5);		 //result5 = 3
	
	//대입연산 = 
	result1 = result5;
	printf("result1의 값은 %d입니다.", result1);	//result1 = 3

	// ctrl + z : 되돌리기
	// ctrl + y : 되돌리기 취소
	// ctrl + d : 복붙
	// alt + 위 : 코드 위로 이동
	// ctrl + shift + a  : 항목추가
	// ctrl + s : 저장

}