#include <stdio.h>

int value(int, int);

int main(void) {

	int x = 6, y = 10;

	printf("6�� 0�º��� 10�±��� ���ϴ� ���α׷�\n\n");

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

	printf("%d�� %2d�� : %8d\n", x, y, num);
	return num;
}

