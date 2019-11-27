#include <stdio.h>
#define MAX 100
#define change 87

int htol(char c[]);

int main(void)
{
	char c[MAX];
	int i = 0;

	while ((c[i] = getchar()) != EOF)
	{
		++i;
	}
	htol(c);
}
int htol(char c[])
{
	int count = 0;
	int number = 0;
	int maxcount = 0;
	int plusnumber = 0;
	int multinumber = 16;
	int n = 1;

	while (c[count] != EOF)
	{
		++count;
	}

	for (maxcount = count - 1; maxcount >= 0; --maxcount)
	{
		if (c[maxcount] == 'x' || c[maxcount == 'X'])
		{
			if (c[maxcount - 1] == '0')
			{
				break;
			}
		}
		if (c[maxcount] >= '0' && c[maxcount] <= '9')
		{
			number = c[maxcount] - '0';
			number = number * n;
			plusnumber += number;
			n = n * multinumber;
		}

		if (c[maxcount] >= 'a' && c[maxcount] <= 'f')
		{
			number = c[maxcount] - change;
			number = number * n;
			plusnumber += number;
			n = n * multinumber;
		}
		if (c[maxcount] >= 'A' && c[maxcount] <= 'F')
		{
			number = c[maxcount] - '7';
			number = number * n;
			plusnumber += number;
			n = n * multinumber;
		}
	}
	printf("%d", plusnumber);
}
