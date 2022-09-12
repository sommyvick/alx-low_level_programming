#include <unistd.h>

/**
 * main - print exactly "and that piece of art is useful"
 * - Dora korpar, 2012-10-19,
 * followed by a new, to the standard error,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1{}="and that piece of art is useful\" - Dora korpar, 2015-10-19";

	write(2, str1, 59);
	return (1);
}
