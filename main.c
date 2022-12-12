#include "includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("=====================\n");
	printf("%14s\n", "Flag: #");
	printf("=====================\n");
	printf("%%x without #\n");
	printf("%x\n", 42);
	printf("%%x with #\n");
	printf("%#x\n", 42);
	printf("\n");

	printf("%%X without #\n");
	printf("%X\n", 42);
	printf("%%X with #\n");
	printf("%#X\n", 42);
	printf("\n");
	 printf("%##d\n", 42);

	// Err with double #
	// printf("%##d\n", 42);

	// Err with %d
	// printf("%#d\n", 42);

	// Err with %p
	// printf("%#p\n", 42);

	// Err with %u
	// printf("%#u\n", 42);

	// Err with %s
	// printf("%#s\n", "42");

	// Err with %c
	// printf("%#c\n", 'c');

	printf("=====================\n");
	printf("%14s\n", "Plus: +");
	printf("=====================\n");
	printf("%%d without +\n");
	printf("%d\n", 42);
	printf("%%d with +\n");
	printf("%+d\n", 42);
	printf("\n");

	printf("%%i without +\n");
	printf("%i\n", 42);
	printf("%%i with +\n");
	printf("%+i\n", 42);
	printf("\n");

	printf("%%f without +\n");
	printf("%f\n", 42.42);
	printf("%%f with +\n");
	printf("%+f\n", 42.42);
	printf("\n");

	// Err with double +
	// printf("%++s\n", "Hello World");

	// Err with %s
	// printf("%+s\n", "Hello World");

	// Err with %c
	// printf("%+c\n", 'C');

	printf("=====================\n");
	printf("%17s\n", "Space: \' \'");
	printf("=====================\n");
	return (0);
}