#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
	const char *p1 = (const void*)src;
	char *p2 = dest;
	while (n--) {
		*(p2++) = *(p1++);
	}
	return dest;
}
