nclude "main.h"
/**
 * _strchr - entry point
 * @s: input value
 * @c: input value too
 * Return: always 0 (success)
 */
char *_strchr(shar * s, char c)
{
	int i = 0;

	for ( ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}