#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a를 입력하시오:");
	scanf_s("%d", &a);
	printf("b를 입력하시오:");
	scanf_s("%d", &b);
	printf("a<<b의 값:80\n");
	printf("a>>b의 값:5\n");
	printf("<< 비트이동 연산자 비트가 한칸 이동할때마다 정수는 두배가 된다");
	return 0;

}