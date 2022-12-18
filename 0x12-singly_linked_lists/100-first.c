#include <stdio.h>

/**
 * startup_function - prints "You're beat! and yet,
 * you must allow
 * ,\nI bore my house upon my back!\n" before
 * 'main' function is executed
 * Description: you are allowed to use the
 *		'printf' function
 */

void startup_function(void)__attribute__((constructor));

void startup_function(void)
{
	printf("You\'re beat! and yet, you ");
	printf("must allow,\nI bore my ");
	printf("house upon my back!\n");
}
