#include "main.h"
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int a;
	int b;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
				break;
			}
		}
	}
	return (s);

}
