#include "includes/ft_printf.h"
#include <stdio.h>

int main(void)
{

	int *ptr = malloc(sizeof(int));
	int i = 42;
	*ptr = i;

	printf("=====================\n");
	printf("%14s\n", "Flag: #");
	printf("=====================\n");
	printf("%%x with # && ' '\n");
	printf("%#20x\n", 42);
	printf("\n");

	printf("%%X with #\n");
	printf("%#X\n", 42);
	printf("\n");

	// Err with %p
	printf("%%p with #\n");
	printf("%#p\n", ptr);
	printf("%p\n", ptr);
	printf("\n");

	// Err with double #
	printf("%%d with ##\n");
	printf("%##d\n", 42);
	printf("\n");

	// Err with %d
	printf("%%d with #\n");
	printf("%#d\n", 42);
	printf("\n");

	// Err with %u
	printf("%%u with #\n");
	printf("%#u\n", 42);
	printf("\n");

	// Err with %s
	printf("%%s with #\n");
	printf("%#s\n", "42");
	printf("\n");

	// Err with %c
	printf("%%c with #\n");
	printf("%#c\n", 'c');
	printf("\n");

	printf("=====================\n");
	printf("%14s\n", "Plus: +");
	printf("=====================\n");
	printf("%%d with + && ' '\n");
	printf("%+20d\n", 42);
	printf("\n");

	printf("%%i with +\n");
	printf("%+i\n", 42);
	printf("\n");

	printf("%%f with +\n");
	printf("%+f\n", 42.42);
	printf("\n");

	printf("%%p with +\n");
	printf("%+p\n", ptr);
	printf("\n");

	// Err with u
	printf("%%u with +\n");
	printf("%+u\n", 42);
	printf("\n");

	// Err with double +
	printf("%%x with ++\n");
	printf("%++s\n", "Hello World");
	printf("\n");

	// Err with %s
	printf("%%s with +\n");
	printf("%+s\n", "Hello World");
	printf("\n");

	// Err with %c
	printf("%%c with +\n");
	printf("%+c\n", 'C');
	printf("\n");

	printf("=====================\n");
	printf("%17s\n", "Space: \' \'");
	printf("=====================\n");
	printf("%%d with ' '\n");
	printf("%20d\n", 42);
	printf("\n");

	printf("%%i with ' '\n");
	printf("%20i\n", 42);
	printf("\n");

	printf("%%f with ' '\n");
	printf("%20f\n", 42.42);
	printf("\n");

	printf("%%u with ' '\n");
	printf("%20u\n", -42);
	printf("\n");

	printf("%%x with ' '\n");
	printf("%20x\n", 42);
	printf("\n");

	printf("%%X with ' '\n");
	printf("%20X\n", 42);
	printf("\n");

	printf("%%s with ' '\n");
	printf("%20s\n", "Hello World");
	printf("\n");

	printf("%%c with ' '\n");
	printf("%20c\n", 'C');
	printf("\n");

	printf("%%p with ' '\n");
	printf("%20p\n", ptr);
	printf("\n");

	// Err with %%
	printf("%% with ' '\n");
	printf("%20%\n");
	return (0);
}