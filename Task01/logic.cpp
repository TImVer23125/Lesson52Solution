#include "logic.h"

bool is_perfect_number(int number) {
	if (number % 2 == 1) {
		return false;
	}
	
	int sum = 1;

	int n = number / 2;

	for (int d = 2; d <= n; d++)
	{
		if (number % d == 0) {
			sum += d;
		}
	}

	return number == sum;
}