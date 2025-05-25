//	checks whether c is a 7-bit unsigned char value that fits into the ASCII character set
int ft_isascii(int c) {
	if (c < 0 || 127 < c)
		return 0;
	return 1;
}
