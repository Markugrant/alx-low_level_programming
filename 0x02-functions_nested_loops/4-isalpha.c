#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c ia a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
