#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
	char *_src = (char *)src;

	size_t len = 0;
	if (size > 0)
	{
		while (len < size - 1 && *src) {
			*dst++ = *src++;
			len++;
		}

		*dst = 0;
	}

	len = 0;

	while (*_src++) {
		len++;
	}

	return len;
}
