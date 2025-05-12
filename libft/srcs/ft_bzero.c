#include <string.h>

void bzero(void *s, size_t n) {
	char *ptr = (char *)s;
	while (n--) {
		*(ptr++) = '\0';
	}
}

