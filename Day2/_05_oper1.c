#include <stdio.h>

void main5() {
	// 비교 연산자 
	// ==, !=, <, >, <=, >=
	// 틀리면 0, 맞으면 1
	printf("%d\n", 1.2 == 1);											//1
	
	// 관계 연산자
	int age = 15;														
	// && : and, 앞뒤 모두 맞으면 맞고, 하나라도 틀리면 틀림
	printf("%d\n", 10<=age && age<20);									//1
	// || : or, 앞뒤 둘 중 하나만 맞아도 맞은 것, 둘 다 틀릴 때만 틀림 
	printf("%d\n", 20 < age || age < 10);								//0
	// ! : not, 맞으면 틀린 것으로, 틀리면 맞은 것으로 바꿈
	printf("%d\n", !(age < 20));										//0
}