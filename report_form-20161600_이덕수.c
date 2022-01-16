#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void ch9_1(void);  void ch9_2(void);  void ch9_3(void);
void ch10_1(void);  void ch10_2(void);  void ch10_3(void);

// 10장 첫번째 문제 관련 함수 선언
//     예시 int inchtocm(int);
// 10장 두번째 문제 관련 함수 선언
//     예시 int intpow(int, int);
// 10장 세번째 문제 관련 함수 선언
//     예시 long cube(int);


int main(void)
{
	int i;
	do  {
		printf("수행하고자 하는 문제 번호 입력(1~6), 종료(0)\n  >> ");
		scanf("%d", &i);	fflush(stdin);

		switch (i) {	//문제 선택
		case  1:	 ch9_1();		printf("\n\n");		system("pause");	system("cls");		break;
		case  2:	 ch9_2();		printf("\n\n");		system("pause");	system("cls");		break;
		case  3:	 ch9_3();		printf("\n\n");		system("pause");	system("cls");		break;
		case  4:	 ch10_1();		printf("\n\n");		system("pause");	system("cls");		break;
		case  5:	 ch10_2();		printf("\n\n");		system("pause");	system("cls");		break;
		case  6:	 ch10_3();		printf("\n\n");		system("pause");	system("cls");		break;
		case  0:	 printf("종료되었습니다.\n");		break;
		default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
		}
	} while (i != 0);   //사용자가 종료를 원할 때까지 반복

}

void ch9_1(void) // 9장 첫번째 문제 프로그램
{
	int a[] = { 4,7,9,3,6 };
	int b[] = { 10, 20, 30, 40, 50, 60 };
	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");

	return ;
}

void ch9_2(void) // 9장 두번째 문제 프로그램
{
	double a = 2;
	double b = 3;
	double c[10];
	for (int i = 0; i < 10; i++) {
		c[i] = 1 / (a*b);
		a += 1;
		b += 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%f", c[i]);
	}

	return ;
}

void ch9_3(void) // 9장 세번째 문제 프로그램
{
	int pascal[11][11] = { 0, 1 }, i, j;

	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			printf("%d   ", pascal[i][j]);
		}
		printf("\n");
	}
	return ;
}


double chacm(int inch);
void ch10_1(void) // 10장 첫번째 문제 프로그램
{
	double chacm(int inch);
	int a;

	printf("inch값을 입력:");
	scanf_s("%d", &a);

	printf("%d inch는%.2lf cm입니다\n", a, chacm(a));
	return;
}
double chacm(int inch) {
	return inch * 2.54;
}

// 10장 첫번째 문제 관련 함수 정의
double area(float num);
double circumference(float fin);
#define PI 3.14
void ch10_2(void) // 10장 두번째 문제 프로그램
{
	float r;

	printf("원의 반지름을 입력하면 원의 면적과 둘레의 길이를 구해줌.\n");
	printf("반지름 입력: ");
	scanf_s("%f", &r);

	printf("\n반지름이 %.2f인 원의 면적은 %.2lf입니다.\n", r, area(r));
	printf("반지름이 %.2f인 원의 길이는 %.2lf입니다.\n", r, circumference(r));

	return ;
}
double area(float r)
{
	double c;

	c = r * r * PI;

	return c;
}

double circumference(float fin)
{
	double c;

	c = 2 * PI * fin;

	return c;
}
// 10장 두번째 문제 관련 함수 정의

int cas(int x, int y);
void ch10_3(void) // 10장 세번째 문제 프로그램
{
	int x = 6, y = 10;

	printf("6의 0승부터 10승까지 구하는 프로그램\n\n");

	cas(x, y);

	return ;
}

// 10장 세번째 문제 관련 함수 정의

int cas(int x, int y) {

	int num;

	if (y >= 1) {
		num = x * cas(x, y - 1);
	}
	else {
		num = 1;
	}

	printf("%d의 %2d승 : %8d\n", x, y, num);
	return num;
}
