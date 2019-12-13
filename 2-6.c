#include <stdio.h>
unsigned setbits(unsigned x, int p, int n);
unsigned setbit(unsigned x, int n);
unsigned unsetbit(unsigned x, int n);
unsigned getlowbit(unsigned x, int n);

unsigned long getlowbits(unsigned long x, unsigned long n);

int main()
{

	printf("%x\n", setbit(0x0, 1));
	printf("%x\n", unsetbit(0xa, 2));
	printf("%x\n", getlowbit(0xb, 2));
	// printf("%d\n", setbits(10, 6, 4));
	// printf("%d", setbits(x, p, n, y));
}
unsigned setbit(unsigned x, int n)
{
	return x | (1 << (n - 1));
}
unsigned unsetbit(unsigned x, int n)
{
	return x & ~(1 << (n - 1));
}
unsigned getlowbit(unsigned x, int n)
{
	int i;
	for (i = 0; i < x + 1; ++i)
	{
	}
	// return x & ((~(1 << (x + 1))) >> n);
}

unsigned setbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & -(-0 << n);
}
