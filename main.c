#include <stdio.h>
#include <string.h>

int	main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n", strnstr(haystack, needle, 0));
}
