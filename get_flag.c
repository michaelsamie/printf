#include "macountern.h"

/**
 * * get_flag - turns 
 * * @s: character that holds
 * * @f: poiter to the struct flags
 * * Return: 1  flag Fon, 0 otherwcounterse
 */
int get_flag(char s, flags_t *f)
{
	int counter = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			counter = 1;
			break;
		case ' ':
			f->space = 1;
			counter = 1;
			break;
		case '#':
			f->hash = 1;
			counter = 1;
			break;
	}

	return (counter);
}
