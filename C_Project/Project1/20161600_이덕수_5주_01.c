#include <stdio.h>

int main(void)
{
	float a;
	printf("���簢���� �Ѻ��� ���̸� �Է��ϼ���:");
	scanf("%f", &a);
	printf("������� ����:%.2f\n", (a*a));
	printf("�簢���� �ѷ�:%.2f\n", (a * 4));
	return 0;
}