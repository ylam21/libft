#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {

	if (!s || !f)
		return NULL;

	size_t mapi_len = ft_strlen(s);

	char *mapi = (char *)malloc(sizeof(char) * mapi_len + 1);

	if (!mapi)
		return NULL;

	mapi[mapi_len] = '\0';

	int i = 0;
	while (i < (int)mapi_len) {
		mapi[i] = f(i,s[i]);
		i++;
	}

	return mapi;
}
