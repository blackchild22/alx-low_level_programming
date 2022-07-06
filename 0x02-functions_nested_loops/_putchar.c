#include <unistd.h>

/**
 * _putchar - writes the character of c to stdout
 * @c : the characer to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
