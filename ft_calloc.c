#include <stdlib.h>

void *ft_calloc(size_t num, size_t size) {
	size_t total = num * size;

	if (size == 0 || num == 0)
		return malloc(1);

	if (total / num != size)
		return NULL;

	int *ptr = (int *)malloc(total);

	if (!ptr)
		return NULL;

	int *_ptr = ptr;

	while (--total) {
		*ptr++ = 0;
	}

	return _ptr;
}
