#include <stdio.h>

double area(float num);
double circumference(float num);

#define PI 3.14

int main(void)
{
	float num;

	printf("원의 반지름을 입력하면 원의 면적과 둘레의 길이를 구합니다.\n");
	printf("반지름 입력: ");
	scanf_s("%f", &num);

	printf("\n반지름이 %.2f인 원의 면적은 %.2lf입니다.\n", num, area(num));
	printf("반지름이 %.2f인 원의 길이는 %.2lf입니다.\n", num, circumference(num));

	return 0;
}

double area(float num)
{
	double c;

	c = num * num * PI;

	return c;
}

double circumference(float num)
{
	double c;

	c = 2 * PI * num;

	return c;
}
