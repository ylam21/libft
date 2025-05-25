#ifndef LIBFT_H

#define LIBFT_H
#include <string.h>
	// libc functions:
	int ft_isalpha(int c);
	int ft_isdigit(int c);
	int ft_isalnum(int c);
	int ft_isascii(int c);
	int ft_isprint(int c);
	int ft_strlen(size_t);
	void *ft_memset(void *s, int c, size_t n);
	void ft_bzero(void *s,size_t n);
	void *ft_memcpy(void *dest,const void *src, size_t n);
	void *ft_memmove(void *dest, const void *src, size_t n);
	size_t ft_strlcpy(char *dst, const char *src, size_t size);
	size_t ft_strlcat(char *dst, const char *src, size_t size);
	int ft_toupper(int c);
	int ft_tolower(int c);

	#endif
