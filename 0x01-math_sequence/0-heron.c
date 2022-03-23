#include <math.h>
#include "heron.h"

/**
* add_node - add node
* @tpt: pointer
* @v: double
* Return: node
*/

t_cell *add_node(t_cell **tpt, double v)
{
t_cell *tempnode;

tempnode = *tpt;

/* firts time */
	if (tempnode == NULL)
	{
	tempnode = malloc(sizeof(t_cell));
	/* malloc goes wrong */
		if (tempnode == NULL)
			free(tempnode);

	tempnode->elt = v;
	tempnode->next = NULL;
	}
	else
	{
	tempnode = malloc(sizeof(t_cell));
		if (tempnode == NULL)
			free(tempnode);

	tempnode->elt = v;
	tempnode->next = *tpt;
	}
/* pointer set to new node adress */
*tpt = tempnode;

return (tempnode);
}

/**
* heron - Return Heron secuence
* @p: double
* @x0: double
* Return: list
*/
/* receive params */
t_cell *heron(double p, double x0)
{
t_cell *thenode = NULL, *list;
double value = x0;
double comp = p / 2;
double aprox = 0;

	while (comp != aprox)
	{
	/* another way of do the heron */
		aprox = comp;
		comp = (p / aprox + aprox) / 2;
	}

/* iterate over value */
	while (comp != value)
	{
	/* do the math */
	value = 0.5 * (value + (p / value));

	/* Populate node list */
	list = add_node(&thenode, value);
	}
/* Return list */
return (list);
}
