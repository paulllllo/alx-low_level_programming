#include "3-calc.h"

/**
 * get_op_func - A function that selects the right function based on operand
 *
 *@s: A char indicating the operand
 *
 * Return: Returns ant which is the index of the matching integer.
 */

int (*get_op_func(char __attribute__ ((unused)) *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int __attribute__ ((unused)) i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
		}
	return (NULL);
}
