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
	professor pf[3] = { { {"박종학","011-3333-2456","인천광역시 간석동"},{"전산과","컴퓨터개론"},"프로그래밍"}
		,{{"이종석","016-3467-4389","서울시 강남구 도곡동"},{"교양과","영어회화"}, "국어" }
		,{{"신용현","017-2222-2456","경기도 일산시 화곡동"},{"교양과","기초수학"},"이산수학" }
	};
	printf("%8s%14s%22s%12s%12s\n\n", "이름", "전화번호", "주소", "학과", "담당 과목");
	for (i = 0; i < 4; i++) {
		printf("% 8s % 14s % 22s %10s", pf[i].p.name, pf[i].p.tel, pf[i].dept);
		for (j = 0; j <= 1; j++)
			printf("%12s", pf[i].lecture[j]);
		printf("\n");
	}
	return 0;
}