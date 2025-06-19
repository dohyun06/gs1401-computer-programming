#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, *arr, sum = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("\nAverage: %.2f", (double)sum / n);
	free(arr);
  
	return 0;
}
