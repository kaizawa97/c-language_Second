#include <stdio.h>
int rightrot(unsigned int x, int n);
int countHighBits(unsigned int x);

int main()
{
	printf("%x\n", rightrot(0x1, 1));
}

int countHighBits(unsigned int x)
{
	int count;
	for (count = 0; x != 0; x >>= 1)
	{
		if ((x & 0x01) == 1)
		{
			++count;
		}
	}
	return count;
}

int rightrot(unsigned int x, int n)
{
	int i, count;
	int size = countHighBits(~0);

	for (i = 0; i < n; ++i)
	{
		if ((x & 0x01) == 1)
		{
			x = x >> 1;
			x = x | (1 << (size - 1));
		}
		else
		{
			x = x >> 1;
		}
	}
	return x;
}
