//	The  memset()  function  fills  the  first  n  bytes of the memory area
//	pointed to by s with the constant byte c

#include <string.h>

void *ft_memset(void *s, int c, size_t n) {
	unsigned char *_s = (unsigned char *)s;
	unsigned char _c = (unsigned char )c;
	while (n--) {
		*_s++ = _c;
	}
	return _s;
}

