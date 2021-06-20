#include <bits/stdc++.h>
using namespace std;

void secondlargest(int arr[], int arr_size)
{
	int i, first, second;

	if (arr_size < 2) {
		printf(" Invalid Input ");
		return;
	}

	sort(arr, arr + arr_size);

	for (i = arr_size - 2; i >= 0; i--) {

		if (arr[i] != arr[arr_size - 1]) {
			printf("The second largest element is %d\n", arr[i]);
			return;
		}
	}

	printf("There is no second largest element\n");
}
