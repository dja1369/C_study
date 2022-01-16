#include<stdio.h>
double chacm(int inch);
int main(void) {

	double chacm(int inch);
	int a;

	printf("inch값을 입력:");
	scanf_s("%d", &a );

	printf("%d inch는%.2lf cm입니다\n", a, chacm(a));
}

double chacm(int inch) {
	return inch * 2.54;
	}
	
