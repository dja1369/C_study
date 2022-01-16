#include <stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하시오:");
	scanf("%d",&a);
	printf("만%d", (a / 10000));
	a = a % 10000;
	printf("천%d",(a/1000));
	a = a % 1000;
	printf("백%d", (a / 100));
	a = a % 100;
	printf("십%d", (a / 10));
	a = a % 10;
	printf("일%d입니다", (a / 1));
		return 0;
}