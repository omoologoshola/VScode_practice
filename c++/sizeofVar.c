#include <stdio.h>
/* This program explains how to print the sizes, in bytes, of the variable types we have in C
they include int, char, float, short, long, double and double long.
When printing we must use %lu and write the (sizeof) together*/
int main (void){
printf ("size of int: %lu bytes\n ", sizeof (int));
printf ("size of char: %lu bytes\n", sizeof (char));
printf ("size of float: %lu bytes\n", sizeof (float));
printf ("size of short: %lu bytes\n", sizeof (short));
printf ("size of long: %lu bytes\n", sizeof (long));
printf ("size of double: %lu bytes\n", sizeof (double));
printf ("size of long double: %lu bytes\n", sizeof (long double));
    return 0;
}