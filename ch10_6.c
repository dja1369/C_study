#include <stdio.h>

double area(float num);
double circumference(float num);

#define PI 3.14

int main(void)
{
	float num;

	printf("���� �������� �Է��ϸ� ���� ������ �ѷ��� ���̸� ���մϴ�.\n");
	printf("������ �Է�: ");
	scanf_s("%f", &num);

	printf("\n�������� %.2f�� ���� ������ %.2lf�Դϴ�.\n", num, area(num));
	printf("�������� %.2f�� ���� ���̴� %.2lf�Դϴ�.\n", num, circumference(num));

	return 0;
}

double area(float num)
{
	double c;

	c = num * num * PI;

	return c;
}

double circumference(float num)
{
	double c;

	c = 2 * PI * num;

	return c;
}
