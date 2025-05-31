#include <string.h>

size_t ft_strlen(const char *s) {
	size_t size = 0;
	while (*s++) {
		size++;
	}
	return size;
}
