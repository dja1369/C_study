#include <stdio.h>

int main(void)
{
	int a;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&a);
	printf("��%d", (a / 10000));
	a = a % 10000;
	printf("õ%d",(a/1000));
	a = a % 1000;
	printf("��%d", (a / 100));
	a = a % 100;
	printf("��%d", (a / 10));
	a = a % 10;
	printf("��%d�Դϴ�", (a / 1));
		return 0;
}