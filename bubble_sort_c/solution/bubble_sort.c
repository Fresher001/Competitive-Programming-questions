// Bubble sort for sorting the array in non decreasing order.
// We will compare the current value and next value for all index of integers if there is doesnot no violation then we break. 
// Else we swap those two values and repeat step 2.

#include "bubble_sort.h"

void	swap_values(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

int *bubble_sort(int *arr, size_t arr_len)
{
	size_t i = 0;

	while (i++ < arr_len)
	{
		if (arr[i] < arr[i-1])
		{
			swap_values(&arr[i], &arr[i-1]);
			i = 0;
		}
	}
	return(arr);
}
