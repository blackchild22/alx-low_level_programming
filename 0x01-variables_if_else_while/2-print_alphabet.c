#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	
	for (ch = 0 ; ch < 26 ; ch++)
	{
		putchar(str[ch]);
	}
	putchar('\n');
	return (0);
}
