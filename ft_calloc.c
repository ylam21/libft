#include "libft.h"

void *ft_calloc(size_t num, size_t size) {
	size_t total = num * size;

	if (num > 0 && size > SIZE_MAX / num)
		return NULL;

	void *ptr = malloc(total);

	if (!ptr)
		return NULL;

	ft_bzero(ptr,total);

	return ptr;
}
