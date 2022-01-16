#include <stdio.h>
int main(void)
{
	float a;
	prinff("실수를 하나 입력하시오:");
	scanf_s("%f", &a);
	printf("소수점 표기방식: %.6f\n", a);
	printf("지수 표기 방식:%e\n", a);

	return 0;
}