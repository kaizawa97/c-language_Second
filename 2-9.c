#include <stdio.h>

int main()
{
	int x;

	for (int i = 0; i < 16; ++i)
	{
		x = i;
		x = x & (x - 1);

		printf("i: 0x%04x, 0x%04x\n", i, x);
	}
	return 0;
}
