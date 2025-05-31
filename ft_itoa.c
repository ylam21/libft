#include <stdlib.h>

static int ft_intlen(int num) {
	int len = (num <= 0);

	while (num) {
		len++;
		num = num / 10;
	}

	return len;
}

char *ft_itoa(int num) {
	int len = ft_intlen(num);
	long nb = num;
	char *str = (char *)malloc(sizeof(char) * (len + 1));

	if (len == 0)
		return NULL;

	str[len] = '\0';

	if (nb == 0) {
		str[0] = '0';
		str[1] = '\0';
	}

	if (nb < 0) {
		str[0] = '-';
		nb = -nb;
	}

	while (nb) {
		str[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}

	return str;
}
