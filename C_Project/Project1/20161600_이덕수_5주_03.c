#include <stdio.h>

int main(void)
{
	unsigned long mars = 117900000;
	unsigned long th = 2871000000;
	printf("�¾翡�� ȭ������:%u\n", mars);
	printf("�¾翡�� õ�ռ�����:%u\n", th);
	printf("ȭ������ õ�ռ�����:%u", (th - mars));
	return 0;
}