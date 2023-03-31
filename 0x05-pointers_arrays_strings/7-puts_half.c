#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 *
 * @str: char array string type
 *
 * Description: if odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);
	
	for (int i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
