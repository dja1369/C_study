#include <stdio.h>

int main(void)
{
	unsigned long mars = 117900000;
	unsigned long th = 2871000000;
	printf("태양에서 화성까지:%u\n", mars);
	printf("태양에서 천왕성까지:%u\n", th);
	printf("화성에서 천왕성까지:%u", (th - mars));
	return 0;
}