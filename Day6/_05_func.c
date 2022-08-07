#include <stdio.h>

int function1() {
	int num = 3333;
	return num;
	}

int function2(int num1) {
	int num3 = 0;
	printf("%d\n", num1);
	return 0;


}
int main() {

	int num4 = 0;
	num4 = function1();
	function2(num4);



	return 0;
}