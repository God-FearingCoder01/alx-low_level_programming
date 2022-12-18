#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - prints "You're beat! and yet,
 * you must allow
 * ,\nI bore my house upon my back!\n" before
 * 'main' function is executed
 * Description: you are allowed to use the
 *		'printf' function
 */

void first(void)
{
	printf("You\'re beat! and yet, you ");
	printf("must allow,\nI bore my ");
	printf("house upon my back!\n");
}
