#include <stdio.h>
int main(c){
	int pascal[11][11] = { 0, 1 },i,j;
	
	for (i = 1; i <= 10; i++){
		for (j = 1; j <= i; j++){
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			printf("%d   ", pascal[i][j]);
		}
		printf("\n");
	}
	return 0;
}