#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	if ((char)n <= 0)
		return 0;

	while (*s1 != 0 && --n) {
		if (*s1 == *s2) {
			s1++;
			s2++;
		}
	}

	return ((int)*s1 - (int)*s2);
}
