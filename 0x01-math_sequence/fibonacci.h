#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

/**
* struct t_cell - struct
* @elt: int
* @next: pointer
*/

typedef struct t_cell
{
int elt;
struct t_cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
