#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
	unsigned char *_dest = (unsigned char *)dest;
	unsigned char tmp[255];
	unsigned char *_tmp = tmp;
	unsigned char idx;

	idx = 0;
	while (src && n--) {
		tmp[idx++] = *(unsigned char *)src++;
	}

	tmp[idx] = 0;

	idx = 0;
	while (*_tmp != 0) {
		*(unsigned char *)dest++ = _tmp[idx++];
	}

	return _dest;
}
