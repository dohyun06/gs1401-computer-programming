#include <stdio.h>

int sum(int i, int res) {
	if (i == 0) return res;
	return sum(i - 1, res + i);
}

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Total sum from 1 to %d = %d", n, sum(n, 0));
  
	return 0;
}

