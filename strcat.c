#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char s[11] = "Hello";
	strcat(s, "World");
	printf("%s \n", s);

	return 0;
}