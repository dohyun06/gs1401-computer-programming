#include <stdio.h>

int main(void) {
	int N;

	printf("Enter a number: ");
	scanf("%d", &N);

	for (int i = 2; i <= N; i+=2) printf("%d ", i);
	printf("\n");
	for (int i = 1; i <= N; i+=2) printf("%d ", i);

	return 0;
}
