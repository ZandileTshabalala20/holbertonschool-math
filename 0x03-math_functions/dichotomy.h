#ifndef _DICHOTOMY_H_
#define _DICHOTOMY_H_

#include <stddef.h>

/*
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next
} list_t;

t_cell *dichotomy(double a, double b);

#endif /* _DICHOTOMY_H_ */
