#include <stdio.h>

void main5() {
	// ���� ���
	// ���� : 90�̻� - A, 80�̻� - B, 70�̻� - C, 70�̸� - D
	char grade;
	int score;
	printf("������ �Է��Ͻÿ�\n");
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
	printf("%d�� %c���", score, grade);

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
	printf("%d�� %c���", score, grade);

}