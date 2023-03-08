#include "main.h"

/**
 * find_root - find square root of n, starting from smallest possible, 0
 * @n: n
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
