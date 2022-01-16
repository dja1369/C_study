#include <stdio.h> 

typedef struct date {
	unsigned int year;
	unsigned int month;
	unsigned int day;
} Date;

typedef struct movie {
	char title[100];
	char producer[30];
	unsigned int numOfSpectator;
	Date releaseDate;
} Movie;

void print(Movie *src);

int main(void)
{
	Movie myMovie[5] = {
	{ "¸í·®", "±èÇÑ¹Î", 17613000, { 2014, 7, 30 }},
	{ "µµµÏµé", "ÃÖµ¿ÈÆ", 12983000, { 2014, 12, 17}},
	{ "±¹Á¦½ÃÀå", "·ù½Â¿Ï", 14257000, { 2014, 12, 17}}
	};
	int i;

	printf(" Á¦¸ñ °¨µ¶ °ü°´¼ö °³ºÀÀÏ\n");
	printf("========================================\n");
	for (i = 0; i < 5; ++i) {
		print(&myMovie[i]);
	}

	return 0;
}

void print(Movie *src)
{
	printf("[%8s] %6s %9u %u.%u.%u\n", src->title, src->producer, src->numOfSpectator, src->releaseDate.year, src->releaseDate.month, src->releaseDate.day);
}