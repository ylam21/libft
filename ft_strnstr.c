#include <string.h>


char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
	char *flag = NULL;
	size_t _n = n;

	if (*haystack == 0 && n == 0)
		return (char *)haystack;

	if (n == 0)
		return 0;

	while (*haystack != 0 && haystack && n--) {
		if (*haystack == *needle) {
			flag = (char *)haystack;
			n = _n;
			while (*haystack == *needle && n--) {
				haystack++;
				needle++;
			}
			if (n == 0)
			return flag;
		}
		haystack++;
	}

	return NULL;
}
