#include <stdio.h>

int main(b){
	double a = 2;
	double b = 3;
	double c[10];
	int d, j;
	for (int i = 0; i < 10; i++){
		c[i] = 1 / (a*b);
		a += 1;
		b += 1;
	}
	for (int i = 0; i < 10; i++){
		printf("%f", c[i]);
	}

	return 0;
}