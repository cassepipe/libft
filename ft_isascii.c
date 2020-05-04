int ft_isascii(int c)
{
	//checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
	if (c < 128)
		return (1);
	return (0);
}


