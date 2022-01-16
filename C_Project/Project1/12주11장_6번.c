#include <stdio.h>
#include <string.h>

#define max 64

void reverse(char a_str[], int a_length)
{
	int left, temp;
	int right = a_length - 1;
	for (left = 0; left < a_length / 2; left++) {
		temp = a_str[left];
		a_str[left] = a_str[right];
		a_str[right] = temp;
		right--;
	}
}

int main(void) 
{
	char str[max];
	printf("한단어를 입력하세요:");

	scanf_s("%[^\n]s", str, max - 1);

	reverse(str, strlen(str));

	printf("%s\n", str);
	return 0;
}