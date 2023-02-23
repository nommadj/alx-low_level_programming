#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
  int i;

  printf("Printing numbers from 0 to 9:\n");

  i = 0;

  while (i < 10)
  {
    putchar(i + '0'); // print the digit corresponding to i
    i++; // increment i
  }

  printf("\n");

  return (0);
}
