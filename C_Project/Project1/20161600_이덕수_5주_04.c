#include <stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하시오:");
	scanf("%d",&a);
	printf("천의 자리:%d\n",(a/1000));
	a = a % 1000;
	printf("백의 자리:%d\n", (a / 100));
	a = a % 100;
	printf("십의 자리:%d\n", (a / 10));
	a = a % 10;
	printf("일의 자리:%d\n", (a / 1));
		return 0;
}