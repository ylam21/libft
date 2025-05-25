#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
	unsigned char *_dest = (unsigned char *)dest;
	unsigned char *_src = (unsigned char *)src;
	while (n--) {
		*_dest++ = *_src++;
	}
	return dest;
}
