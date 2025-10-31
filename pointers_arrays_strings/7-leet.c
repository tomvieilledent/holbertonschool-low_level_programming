/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
