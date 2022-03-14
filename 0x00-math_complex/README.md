0x00. Math - Complex

Learning Objectives:

This project is devoted to do some basic operations in the real line and the complex plane.

Algebra operations.
Absolute values.
Cosinus and Sinus.
The Cartesian plane.
The Complex plane.
Real part and Imaginary part of Complex Numbers.
Modulus
Argument
Tasks
0. Structure Complex
mandatory

Build the structure “complex” where a complex number a + ib is represented by two doubles.

Write a function that displays the complex numbers, followed by a new line.

Prototype: void display_complex_number(complex c);
You can use printf in your code
File: 0-display.c
1. Conjugate
Write a function that returns the conjugate of a given complex number.

Prototype: complex conjugate(complex c);
File: 1-conjugate.c
2. Modulus
Write a function that returns the modulus of a given complex number.

Prototype: double modulus(complex c);
You can use the library <math.h> in your code
File: 2-modulus.c
3. Argument
Write a function that returns the argument of a given complex number.

Prototype: double argument(complex c);
You can use the library <math.h> in your code
File: 3-argument.c
4. Addition
Write a function that performs the addition operation to complex numbers.

Prototype: void addition(complex c1, complex c2, complex *c3);
File: 4-addition.c
5. Substraction
Write a function that performs the substraction operation to complex numbers.

Prototype: void substraction(complex c1, complex c2, complex *c3);
File: 5-substraction.c
6. Multiplication
Write a function that performs the multiplication operation to complex numbers.

Prototype: void multiplication(complex c1, complex c2, complex *c3);
File: 6-multiplication.c
7. Division
Write a function that performs the division operation to complex numbers.

Prototype: void division(complex c1, complex c2, complex *c3);
File: 7-division.c
8. Real and imaginary
Write a function that update the real and the imaginary parts of a complex number given its modulus and arguments.

Prototype: void complex_from_mod_arg (double m, double arg, complex *c3);
You can use the library <math.h> in your code
File: 8-complex.c
