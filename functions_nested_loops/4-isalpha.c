/**
 * _isalpha - Checks if a character is an alpha
 * @c: The character to check (ASCII value)
 *
 * Return: 1 if c is an alpha, 0 otherwise
 */
int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
