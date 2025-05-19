//	checks for a digit (0 through 9)
int ft_isdigit(int c) {
	if ('0' <= c && c <= '9')
		return 1;
	return 0;
}
