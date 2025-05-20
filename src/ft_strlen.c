//	the strlen() function calculates the length of the string pointed to by
//	s, excluding the terminating null byte ('\0').
#include <string.h>

size_t ft_strlen(const char *s) {
	size_t size = 0;
	while (*(s)++ != 0) {
		size++;
	}
	return size;
}
