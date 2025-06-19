#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number for the highest multiplication table (n): ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i+=2) {
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf ("\n");
	}

	return 0;
}
