#include "libft.h"

void ft_putstr_fd(char *s, int fd) {
	int i = 0;
	while (s && s[i] != '\0')
		write(fd,&s[i++],1);
}
