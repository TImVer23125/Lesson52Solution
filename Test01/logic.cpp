#include "logic.h"
#include "util.h"

void sort_bubble(int array[], int size) {
	int count = 0;
	if (size <= 0) {
		return;
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			count++;
			if (array[j] > array[j + 1]) {
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}

	cout << "count = " << count << endl;
}