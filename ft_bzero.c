//	the  bzero()  function  erases  the  data  in the n bytes of the memory
//	starting at the location pointed to by s, by writing zeros (bytes  con‐
//	taining '\0') to that area.
//	The  explicit_bzero()  function  performs the same task as bzero().  It
//	differs from bzero() in that it guarantees that compiler  optimizations
//	will  not  remove  the erase operation if the compiler deduces that the
//	operation is "unnecessary".

#include <strings.h>

void ft_bzero(void *s, size_t n) {
	unsigned char *_s = (unsigned char *)s;
	while (_s && n--) {
		*_s++ = 0;
	}
}
