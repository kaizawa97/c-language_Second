#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long getlowbits(unsigned long x, unsigned long n);

int main(void)
{
	unsigned long x;

	srand(time(NULL));

	x = rand();
	for (int i = 0; i < 32; ++i)
	{
		printf("%2d: x = 0x%08lx, 0x%08lx\n", i, x, getlowbits(x, i));
	}
	return 0;
}

unsigned long getlowbits(unsigned long x, unsigned long n)
{
	return x & (~(~0UL << (n + 1)));
}
// ​int main(void)
// {
// 	unsigned long x;
// 	​
// 		srand(time(NULL));
// 	x = rand();
// 	for (int i = 0; i < 32; i++)
// 	{
// 		printf("%2d: x = 0x%08lx, 0x%08lx\n", i, x, getlowbits(x, i));
// 	}
// 	​return 0;
// }
// ​unsigned long getlowbits(unsigned long x, unsigned long n)
// {
// 	return x & (~(~0UL << (n + 1)));
// }