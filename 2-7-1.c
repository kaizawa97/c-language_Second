#include <stdio.h>

unsigned invertAllBits(unsigned x);
unsigned invertNBits(int x, int n);

int main()
{
	printf("%x\n", invertAllBits(0xa));
	printf("%x\n", invertNBits(0xaa, 4));
}

unsigned invertAllBits(unsigned x)
{
	return ~x;
}
unsigned invertNBits(int x, int n)
{
	int i = ~0;
	int q = i << n;
	return x ^ (~q);
}