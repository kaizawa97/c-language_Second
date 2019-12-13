#include <stdio.h>

int invert(unsigned int x, int p, int n);

int main()
{
	printf("%x", invert(0x2a, 4, 3));
}

int invert(unsigned int x, int p, int n)
{
	int m = ~0;
}

//整数xの値をみぎにnビット回転する関数rightrot(x,n)を書く。