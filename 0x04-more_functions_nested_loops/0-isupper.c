/**
 * _isupper - checks for upper/lower case
 * @c: charactor to be tested
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
