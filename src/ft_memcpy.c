#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
	unsigned char *pdest = (unsigned char *)dest;
	unsigned char *psrc = (unsigned char *)src;
	while (n--) {
		*pdest++ = *psrc++;
	}
	return dest;
}
