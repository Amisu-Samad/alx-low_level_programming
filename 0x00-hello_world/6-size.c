#include <stdio.h>

/**
 * main - a programe that prints size of various type on a computer
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned char)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned char)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned char)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned char)sizeof(f));
	return (0);
}
