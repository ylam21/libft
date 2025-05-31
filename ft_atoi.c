int ft_isdigit(int c);

static int ft_isspace(char c) {
	return (\
		c == '\t'|| \
		c == '\n'|| \
		c == '\v'|| \
		c == '\f'|| \
		c == '\r'|| \
		c == ' ');
}

static int ft_getstartidx(const char *s) {
	int idx = 0;
	while (s[idx] != 0) {
		if (!ft_isspace(s[idx]))
			return idx;
		idx++;
	}
	return -1;
}

int ft_atoi(const char *s) {
	int start_pos = ft_getstartidx(s);
	if (start_pos == -1)
		return 0;

	int pos = start_pos;
	int sign = 0;
	if (s[pos] == '-' || s[pos] == '+') {
		if (s[pos] == '-')
			sign = 1;
		pos++;
	}

	int acc = 0;
	while (s[pos] != 0 && ft_isdigit(s[pos]))
	{
		acc = acc * 10 + s[pos] - '0';
		pos++;
	}

	if (sign)
		return acc * -1;
	return acc;
}
