#include <stdio.h>

void find_max(int arr[], int n, int* max, int* index) {
	*max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > *max) {
			*index = i;
			*max = arr[i];
		}
	}
}

int main(void) {
	int n, arr[100];
	int max, index;

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}
	find_max(arr, n, &max, &index);

	printf("\nResult:\n");
	printf("The maximum value is %d at index %d.", max, index);
				

	return 0;
}




