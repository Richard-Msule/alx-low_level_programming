#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@ab: integer input
 * Return: Always return 0 (success)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
