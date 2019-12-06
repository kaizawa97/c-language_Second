#include <stdio.h>
#define MAX 1024

int any(char s1[], char s2[]);

int main()
{
	char str[] = "aabbdcdczzxzzp";

	printf("%d", any(str, "q"));
}

int any(char s1[], char s2[])
{
	int i, j, k, d;
	int number = 0;
	char flags[MAX];

	for (i = 0; i < sizeof(flags) / sizeof(flags[0]); i++)
	{
		flags[i] = 0;
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = k = 0; s2[k] != '\0'; k++)
		{
			if (s1[i] == s2[k])
			{
				flags[i] = 1;
			}
		}
	}
	for (d = 0; 0 < MAX; ++d)
	{
		if (flags[d] == 0)
		{
			++number;
		}
		else if (flags[d] == 1)
		{
			break;
		}
		if (d >= MAX)
		{
			number = -1;
		}
	}
	return number;
}