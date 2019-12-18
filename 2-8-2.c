#include <stdio.h>
int countHighBits(int x);
int reverseBits(int x);

int main()
{
	printf("%d\n", countHighBits(0x8));
	printf("%x\n", reverseBits(0xf));
}

int countHighBits(int x)
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

int reverseBits(int x)
{
	int reverse;

	for (reverse = 0; x != 0; x >>= 1)
	{
		reverse = reverse << 1;
		if ((x & 0x01) == 1)
		{
			// ++reverse;
			reverse = reverse | 0x01;
		}
	}
	return reverse;
}

// printf("inside: 0x%x\n", x);