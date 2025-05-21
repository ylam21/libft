#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
	unsigned char *_dest = (unsigned char *)dest;
	unsigned char *_src = (unsigned char *)src;
	unsigned char tmp[255];
	unsigned char *_tmp = tmp;
	unsigned char idx  = 0;

	while (_src && *_src != 0) {
		tmp[idx++] = *_src++;
	}

	tmp[idx] = 0;

	idx = 0;
	while (n--) {
		*_dest++ = tmp[idx++];
	}

	return _tmp;

}
