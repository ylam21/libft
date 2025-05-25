//	checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c))
int ft_isalnum(int c) {
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return 1;
	else if ('0' <= c && c <= '9')
		return 1;
	return 0;
}
