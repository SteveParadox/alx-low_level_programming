#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int len;

	str = "My fist strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
