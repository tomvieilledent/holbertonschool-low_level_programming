/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to check (ASCII value)
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
