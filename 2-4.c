#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	char str[] = "abscc";
	squeeze(str, "ab");
	printf("%s\n", str);
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	char flag[100];

	if (s1 == s2)
	{
		flag[0] = 1;
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		for (i = j = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[k])
			{
				s1[j++] = s1[i];
			}
		}
	}
	s1[j] = '\0';
}