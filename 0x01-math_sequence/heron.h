#ifndef SEQUENCES_H
#define SEQUENCES_H

#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

/**
* struct t_cell - struct
* @elt: double
* @next: pointer
*/

typedef struct t_cell
{
double elt;
struct t_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /* SEQUENCES */
