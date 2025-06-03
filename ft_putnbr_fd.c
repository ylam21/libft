#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
	char *str = ft_itoa(n);

	if (!str)
		return;

	size_t i = 0;
	while (i < ft_strlen(str))
		write(fd,&str[i++],1);

	free(str);
}
