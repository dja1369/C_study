#include <stdio.h> 

typedef struct person {
	char name[20];
	char tel[20];
	char address[80];
}person;

typedef struct professor {
	person p;
	char *lecture[2];
	char dept[20];
}professor;
int main(void) {
	int i, j;
	professor pf[3] = { { {"������","011-3333-2456","��õ������ ������"},{"�����","��ǻ�Ͱ���"},"���α׷���"}
		,{{"������","016-3467-4389","����� ������ ���"},{"�����","����ȸȭ"}, "����" }
		,{{"�ſ���","017-2222-2456","��⵵ �ϻ�� ȭ�"},{"�����","���ʼ���"},"�̻����" }
	};
	printf("%8s%14s%22s%12s%12s\n\n", "�̸�", "��ȭ��ȣ", "�ּ�", "�а�", "��� ����");
	for (i = 0; i < 4; i++) {
		printf("% 8s % 14s % 22s %10s", pf[i].p.name, pf[i].p.tel, pf[i].dept);
		for (j = 0; j <= 1; j++)
			printf("%12s", pf[i].lecture[j]);
		printf("\n");
	}
	return 0;
}