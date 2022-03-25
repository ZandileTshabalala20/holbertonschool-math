# 0x01. Math - Sequence
## Learning Objectives

    Sequences
    Arithmetic and Geometric sequences. 3. Recurrent sequences
    Induction
    Limits
    Classic sequences

### Requirements

    How to use structures
    How to use linked lists

## Tasks
### 0. The Heron sequence

The Heron sequence is defined by: with .

Write a function that return the Heron sequence until having convergence with an error less or equal to .

    Prototype: t_cell *heron(double p, double x0);
    You must use linked lists.

#### File: 0-heron.c

### 1. The Fibonacci sequence

The Fibonacci sequence is defined by: is valid for with .

Code the Fibonacci sequence until having a geometric behavior. How can we deduce the gold number ?

    Prototypes: t_cell *Fibonnaci(); double gold_number(t_cell *head);
    You must use linked lists.
    You can use the library <math.h> in your code

#### File: 1-fibonacci.c
![Fibonacci](https://media.geeksforgeeks.org/wp-content/cdn-uploads/fibonacci-sequence.png)

### 2. Mandelbrot’s Sets

The Mandelbrot’s set is the set of complex numbers c for which the function does not diverge when iterated from . If we assume that the sequence diverges if it becomes greater than 2.
Code the Mandelbrot’s set in a PGM file with a recurrent sequence:

Compile with: gcc -Wall -Werror -Wextra -std=c89 -pedantic 2-mandelbrot.c 2-main.c -o mandelbrot

Run ./mandlebrot

This command will create a file named mandelbrot.pgm in the current directory

#### File: mandelbrot.c

![Mandelbrot's set](https://www.researchgate.net/profile/John-Hubbard-6/publication/228540477/figure/fig1/AS:669410264088623@1536611252979/The-Mandelbrot-set-M-The-two-main-conjectures-are-the-following-MLC-The-set-M-is.png)

### 3. Julia’s Sets

Code the Julia’s Set in a PGM file with a recurrent sequence

Compile with: gcc -Wall -Werror -Wextra -std=c89 -pedantic 3-julia.c 3-main.c -o julia

Run ./julia

	With the desired options
	width: canva width
	height: canva height
	complex: real imaginary
	radius: distance factor
	n: iterations

ie ./julia 200 200 -0.9 0.02 2 50

This command will create a file named julia.pgm in the current directory

#### File: julia.c

![Julia](https://mathpng.com/wp-content/uploads/2021/07/gren_13.png)

#### Why I'm here
Don't know...

