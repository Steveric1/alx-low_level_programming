#include <stdio.h>

/**
 * startupFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void startupFun(void) __attribute__ ((constructor));

/**
 * startupFun - implementation of myStartupFun
 */
void startupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
