#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 1024

int main(void)
{
	char str[MAX_STR_LEN];

	fgets(str, MAX_STR_LEN, stdin);

	return 0;
}