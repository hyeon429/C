#include <stdio.h>

void main2() {
	int age;
	printf("���̸� �Է��ϼ��� >> ");
	scanf("%d", &age);
	if (0 < age && age < 10) {
		printf("����Դϴ�.");
	}
	else if (age <= 19) {
		printf("10���Դϴ�.");
	}
	else if (age <= 29) {
		printf("20���Դϴ�.");
	}
	else if (!(30 > age)) {
		printf("30�� �̻��Դϴ�.");
	}
}