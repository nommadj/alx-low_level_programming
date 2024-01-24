#include <stdio.h>
#include "main.h"
[2;2R[>77;30700;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
