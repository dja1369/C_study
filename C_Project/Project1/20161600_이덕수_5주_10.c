#include <stdio.h>
int main(void)
{
	float kilo;
	printf("킬로그램 입력하시오:");
	scanf_s("%f", &kilo);
	printf("파운드 로 :%.3f",(kilo*0.453592));
	return 0;
}