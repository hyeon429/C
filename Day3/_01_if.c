#include <stdio.h>

void main1() {
	// 제어문 : if, switch, while, for, ...
	// 조건문 : if, switch (조건이 맞으면 실행, 틀리면 무시)	대개 if는 범위에 속하는 지  switch는 일치하는지
	// 반복문 : while, for (조건이 맞을 때마다 실행, 틀리면 무시)
	
	int age;						// 변수 age를 만들고 0의 값을 넣어줌(초기화)
	printf("나이를 입력하시오>> ");
	scanf("%d세", &age);					// 나이를 입력

	// 입력한 나이가 20 이상이면 '성인'이라 표시
	// if (조건) {실행} 
	if (age >= 20) {
		printf("성인");
	}


}