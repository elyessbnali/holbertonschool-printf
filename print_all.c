#include "main.h"
/**
 * print_all - chose the right function
 * @ch: character
 * Return: 0
 */
int (*print_all(const char ch))(va_list)
{
	int ELYESS = 0;

	list_t printf[] = {
		{'c', print_character},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}};

	while (printf[ELYESS].specifiers != '\0')
	{
		if (ch == (printf[ELYESS].specifiers))
		{
			return (printf[ELYESS].f);
		}
		ELYESS++;
	}
	return (0);
}
