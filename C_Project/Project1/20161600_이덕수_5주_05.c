#include <stdio.h>

intmain(void)
{
	char a;
	printf("ASCII 코드 정수값을 입력하시오:");
	scanf_s("%c", &a);
	printf("\nASCII 코드 정수값 %d는 문자로%c입니다.", a);
	return 0;

}