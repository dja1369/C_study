#include <stdio.h>
int main(void)
{
	float a;
	prinff("�Ǽ��� �ϳ� �Է��Ͻÿ�:");
	scanf_s("%f", &a);
	printf("�Ҽ��� ǥ����: %.6f\n", a);
	printf("���� ǥ�� ���:%e\n", a);

	return 0;
}