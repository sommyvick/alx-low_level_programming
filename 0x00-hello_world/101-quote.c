#include <unistd.h>
/**
 * main - ENtry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str1{}="and that piece of art is useful\" - Dora korpar, 2015-10-19";

	write(2, str1, 59);
	return (1);
}
