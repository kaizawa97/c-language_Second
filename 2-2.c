#include <stdio.h>
#define MAX 100
int main()
{
	int i, lim;
	char c, s[MAX];

	for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
	{
		s[i] = c;
	}
}