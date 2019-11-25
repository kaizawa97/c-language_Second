#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <limits.h>

int main()
{
	printf("%d\n", SCHAR_MAX); //char max
	printf("%d\n", SCHAR_MIN); //char min

	printf("%d\n", UCHAR_MAX); // unsigned max char
	printf("%d\n", CHAR_MAX);  // char max
	printf("%d\n", CHAR_MIN);  // char min

	printf("%d\n", USHRT_MAX); // unsigned short max
	printf("%d\n", SHRT_MAX);  // short max
	printf("%d\n", SCHAR_MIN); // short min

	printf("%d\n", UINT_MAX); //unsigned int max
	printf("%d\n", INT_MAX);  // int max
	printf("%d\n", INT_MAX);  // int min
}
