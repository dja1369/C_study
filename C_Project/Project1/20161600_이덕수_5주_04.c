#include <stdio.h>

int main(void)
{
	int a;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&a);
	printf("õ�� �ڸ�:%d\n",(a/1000));
	a = a % 1000;
	printf("���� �ڸ�:%d\n", (a / 100));
	a = a % 100;
	printf("���� �ڸ�:%d\n", (a / 10));
	a = a % 10;
	printf("���� �ڸ�:%d\n", (a / 1));
		return 0;
}