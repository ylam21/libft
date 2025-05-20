//	The  memset()  function  fills  the  first  n  bytes of the memory area
//	pointed to by s with the constant byte c

#include <string.h>

void *ft_memset(void *s, int c, size_t n) {
	unsigned char *p = (unsigned char *)s;
	unsigned char val = (unsigned char )c;
	while (n--) {
		*p++ = val;
	}
	return s;
}

