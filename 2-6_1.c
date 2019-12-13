#include <stdio.h>

int setbits(unsigned int x, int p, int n, int y);

int main()
{
	printf("%x", setbits(0x2aa, 5, 4, 0x8));
}

int setbits(unsigned int x, int p, int n, int y)
{
	int number;

	number = ~0 << n;
	return ((x & number) >> n) | y;
}