#include <stdio.h>
/**
 * main - This program prints the size of various types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int j;
float d;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
