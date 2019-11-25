#include <stdio.h>
#define MAX 100
int main()
{
	int i, lim;
	char c, s[MAX];

	for (i = 0; i < lim - 1; ++i)
	{
		if ((c = getchar()) == '\n')
		{
			i = lim;
		}
		else if (c == EOF)
		{
			i = lim;
		}
		else
		{
			s[i] = c;
		}
	}
}