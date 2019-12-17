#include <stdio.h>

int invert(unsigned int x, int p, int n);

int main()
{
	printf("%x", invert(0xaa, 4, 3)); //0x2aaは、二進数で1010101010　である。
}

int invert(unsigned int x, int p, int n)
{
	int m = ~0;
	int q = ~(m << n);
	return x ^ (q << p);
}

//整数xの値をみぎにnビット回転する関数rightrot(x,n)を書く。

// int m = ~0 << p;
// int b = ~(~0 << (x - p - n));
// int q = b << (q + n);

// return x ^
// 	   ((m << p) & q);