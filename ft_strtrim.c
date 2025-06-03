#include "libft.h"

//static int ft_getendidx(const char *s,const char *set) {
//	if (!s || !set)
//		return -1;
//
//	int pos = ft_strlen(s) - 1;
//
//	while (0 <= pos && ft_isset(set, s[pos]))
//		pos--;
//
//	return pos;
//}
//
//static int ft_getboundidx(const char *s,const char *set) {
//	int pos = 0;
//
//	if (!s || !set)
//		return -1;
//
//	while (s[pos] != '\0' && ft_isset(set,s[pos]))
//		pos++;
//
//	return pos;
//}

static int ft_isset(const char *set, char c) {
	while (set && *set) {
		if ((char)*set == c)
			return 1;
		set++;
	}
	return 0;
}


static int ft_getbound(const char *s,const char *set, int start) {
	if (!s || !set)
		return -1;

	int pos;
	if (start) {
		pos = 0;
		while (s[pos] != '\0' && ft_isset(set,s[pos]))
			pos++;
	}

	else {
		pos = ft_strlen(s) - 1;
		while (0 <= pos && ft_isset(set, s[pos]))
			pos--;
	}

	return pos;
}


char *ft_strtrim(char const *s1, char const *set) {
	int start = ft_getbound(s1,set,1);
	int end = ft_getbound(s1,set,0);

	if (start > end)
		return ft_strdup("");

	size_t trim_len = (size_t)end - (size_t)start + 1;

	char *trim = (char *)malloc(sizeof(char) * trim_len + 1);

	if (!trim)
		return NULL;

	trim[trim_len] = '\0';

	size_t i = 0;
	while (i < trim_len) {
		trim[i] = s1[start + i];
		i++;
	}

	return trim;
}
