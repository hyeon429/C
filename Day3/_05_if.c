#include <stdio.h>

void main5() {
	// 학점 계산
	// 점수 : 90이상 - A, 80이상 - B, 70이상 - C, 70미만 - D
	char grade;
	int score;
	printf("점수를 입력하시오\n");
	scanf("%d", &score);

	if (score >= 70) {
		grade = 'C';
		if (score >= 80) {
			grade = 'B';
			if (score >= 90) {
				grade = 'A';
			}
		}

	}
	else {
		grade = 'D';
	}
	printf("%d점 %c등급", score, grade);

	// or

	if (100 <= score && score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}
	printf("%d점 %c등급", score, grade);

}