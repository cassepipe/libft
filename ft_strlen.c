#include <stdlib.h>

size_t ft_strlen(const char* s)
{
	size_t len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

//#include <stdio.h>
//
//int main(void)
//{
//	char arr[] = "Hello";
//
//	printf("len of \"Hello\" is %lu", strlen(arr));
//
//	return 0;
//}
