#include <stdio.h>

void main0() {

	// 제어문 : if, switch, while, for, ...
	
	// 조건문
	
	// if ()  {} : ()안에 조건이 맞으면 {}내용 실행, 조건이 틀리면 {}내용 무시
	// form : if~else if~else
	if (1 == 1) {
		printf("1 equals 1\n");
	}
	// c언어에서 0은 틀리다는 표현, 1은 맞다는 표현
	if (0) {
		printf("ignore\n");
	}
	else if (1)
		printf("follow\n");
	else {
		printf("ignore\n");
	}

	int age = 20;
	if (age < 10) {
		printf("child\n");
	}
	else if (age < 20) {
		printf("teenager\n");
	}
	else {
		printf("adult\n");
	}

	// switch () {} : ()안에 내용이 case와 같다면 해당 case부터 실행
	// form : switch~case~break
	switch (age/10) {
	case 0:
		printf("child\n");
		break;
	case 1:
		printf("teenager\n");
		break;
	case 2:
		printf("younger\n");
		break;
	default:
		printf("senior\n");
	}

	// 반복문
	
	// while () {} : ()안에 내용이 맞으면 {}를 실행하고 ()로 되돌아감, 틀릴 때까지 실행
	int flag = 0;
	while (flag < 3) {
		flag++;
		printf("hello\n");
	}
	printf("최종값 : %d\n", flag);

	// for () {} : ()
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("hello \n");

	}
	   printf("최종값 : %d\n", i);





}


