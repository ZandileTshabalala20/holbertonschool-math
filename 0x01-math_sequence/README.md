Tasks

0. The Heron sequence
#advanced

The Heron sequence is defined by:  with .

Write a function that returns the Heron sequence until having convergence with an error less or equal to .

Prototype: t_cell *heron(double p, double x0);
You must use linked lists.


julien@ubuntu:~/0x01-math_sequence$ cat 0-main.c
#include <stdio.h>
#include "heron.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_list(t_cell *head)
{
    if (head == NULL)
       return;
    print_list(head->next);
    printf("%lf ",head->elt);
}

int main()
{
    double p, u0;
    t_cell *head;

    u0 = 1;
    p = 35;
    printf("The Heron sequence until having convergence with an error equal to 10^(-7) is:\n");
    head = heron(p, u0);
    print_list(head); 
    printf("\n");
    return (0);
}

julien@ubuntu:~/0x01-math_sequence$ gcc -Wall -pedantic -Werror -Wextra -std=c89 0-heron.c 0-main.c -o ./0-heron
julien@ubuntu:~/0x01-math_sequence$ ./0-heron
The Heron sequence until having convergence with an error equal to 10^(-7) is:
1.000000 18.000000 9.972222 6.740986 5.966552 5.916293 5.916080
Repo:

GitHub repository: holbertonschool-math
Directory: 0x01-math_sequence
File: 0-heron.c
  
1. The Fibonacci sequence

#advanced
The Fibonacci sequence is defined by:  is valid for  with .

Code the Fibonacci sequence until having a geometric behavior. How can we deduce the gold number ?

Prototypes: t_cell *Fibonnaci(); double gold_number(t_cell *head);
You must use linked lists.
You can use the library <math.h> in your code


julien@ubuntu:~/0x01-math_sequence$ cat 1-main.c 
#include <stdio.h>
#include "fibonacci.h"

void print_list(t_cell *head)
{
    if (head == NULL)
        return;
    print_list(head->next);
    printf("%d ", head->elt);
}

int main()
{
    t_cell *head;

    head = Fibonnaci();
    print_list(head);
    printf("\n");
    if (head)
        printf("The gold number is: %lf\n", gold_number(head));
    return (0);
}

julien@ubuntu:~/0x01-math_sequence$ gcc -std=c89 -Wall -pedantic -Werror -Wextra -lm 1-main.c 1-fibonacci.c -o 1-fibonacci
julien@ubuntu:~/0x01-math_sequence$ ./1-fibonacci
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
The gold number is: 1.618034
julien@ubuntu:~/0x01-math_sequence$
Repo:

GitHub repository: holbertonschool-math
Directory: 0x01-math_sequence
File: 1-fibonacci.c
  
2. Mandelbrot’s Sets

#advanced
The Mandelbrot’s set is the set of complex numbers c for which the function  does not diverge when iterated from .

If we assume that the sequence  diverges if it becomes greater then 2. Code the Mandelbrot’s set in a PGM file mandelbrot.pgm with a recurrent sequence:  where the width = 1000 pixels, the hight = 1000 pixels and the maximum of iterations = 255.



Note:

In these projects, you should use the functions modulus, addition and multiplication from the previous math project Complex. Add a file complex.c contains this functions. Then include the file holberton.h contains the struct complex in 2-mandelbrot.c file. (Don’t use include <complex.h> library).
We want the center of the image to be mapped to (0,0), so given a pixel we subtract half of the image height from the vertical coordinate, and half of the width from the horizontal coordinate. Next, the scale: we know that the Mandelbrot set lies within a circle of radius 2, so the entire width of the image should have length 4.
So the equations of the complex number c using the variables x and y will be:

c.re = (x - width /2) * 4.0 /  width
c.im = (y - length /2 ) * 4.0 /  width
Repo:

GitHub repository: holbertonschool-math
Directory: 0x01-math_sequence
File: 2-mandelbrot.c, mandelbrot.pgm, complex.c
  
3. Julia’s SetsChecks

#advanced
Code the Julia’s Set in a PGM file with a recurrent sequence:  and output the results into 6 PGM files for each of the following c complex numbers:

c= -0.625 + 0.4i refers to the file julia1.pgm
c= 0.285 + 0i refers to the file julia2.pgm
c= 0.285 + 0.01i refers to the file julia3.pgm
c= -0.7269 + 0.1889i refers to the file julia4.pgm
c= -0.835 + 0.2321i refers to the file julia5.pgm
c= -0.70176 - 0.3842i refers to the file julia6.pgm
     

The prototype of the function which will be called 6 times in the main of the file julia.c:

void JuliaSet(FILE *name, char name1[20], complex c, int xmax, int ymax) where the xmax = 1000 pixels and the ymax = 1000 pixels.

Note:

In these projects, you should use the functions modulus, addition and multiplication from the previous math project Complex. Add a file complex.c contains this functions. Then include the file holberton.h contains the struct complex in 3-julia.c file. (Don’t use include <complex.h> library).

We want the center of the image to be mapped to (0,0), the Julia set is the line segment between −2 and 2.

So the equations of the complex number z using the variables x and y will be:

z.re = -2 + x * 0.004
z.im = -2 + y * 0.004
Repo:

GitHub repository: holbertonschool-math
Directory: 0x01-math_sequence
File: 3-julia.c, julia1.pgm, julia2.pgm, julia3.pgm, julia4.pgm, julia5.pgm, julia6.pgm, complex.c

