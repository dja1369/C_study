#include <stdio.h>

int value(int, int);

int main(void) {

	int x = 6, y = 10;

	printf("6의 0승부터 10승까지 구하는 프로그램\n\n");

	value(x, y);

	return 0;
}

int value(int x, int y) {

	int num; 

	if (y >= 1) {
		num = x * value(x, y - 1);
	}
	else {
		num = 1;
	}

	printf("%d의 %2d승 : %8d\n", x, y, num);
	return num;
}

