#include<stdio.h>
double chacm(int inch);
int main(void) {

	double chacm(int inch);
	int a;

	printf("inch���� �Է�:");
	scanf_s("%d", &a );

	printf("%d inch��%.2lf cm�Դϴ�\n", a, chacm(a));
}

double chacm(int inch) {
	return inch * 2.54;
	}
	
