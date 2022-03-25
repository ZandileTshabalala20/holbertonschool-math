#include "julia.h"

/**
* main - Entry point for julia
* @argc: int
* @argv: char
* Return: int 0
*/

int main(int argc, char *argv[])
{
	int width, height;
	complex c;

	if (argc != 7)
	{
		printf("Usage :width, height, real, imaginary, limit radius, iterations ");
	}
	else
	{
		width = atoi(argv[1]);
		height = atoi(argv[2]);

		c.x = atof(argv[3]);
		c.y = atof(argv[4]);

		julia(width, height, c, atof(argv[5]), atoi(argv[6]));
	}
	return (0);
}
