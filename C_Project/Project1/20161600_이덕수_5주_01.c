#include <stdio.h>

int main(void)
{
	float a;
	printf("정사각형의 한변의 길이를 입력하세요:");
	scanf("%f", &a);
	printf("사격형의 넓이:%.2f\n", (a*a));
	printf("사각형의 둘레:%.2f\n", (a * 4));
	return 0;
}