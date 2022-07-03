// C program to check if k-th bit
// of a given number is set or not
#include <stdio.h>

void isKthBitSet(int n, int k)
{
	if (n & (1 << (k - 1)))
		printf("SET");
	else
		printf("NOT SET");
}

// Driver code
int main()
{
	int n = 5, k = 1;
	isKthBitSet(n, k);
	return 0;
}

// this code is contributed by devendrasaluke
