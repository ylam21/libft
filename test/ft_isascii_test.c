#include <assert.h>
#include <ctype.h>

int ft_isascii(int c);

int main(void) {
	// isascii [ctype library]:
	// the values returned are nonzero if the character c falls into the tested class, and zero if not
	int test0 = 0;
	assert(ft_isascii(test0) != 0 && isascii(test0) != 0);

	int test1 = 127;
	assert(ft_isascii(test1) != 0 && isascii(test1) != 0);

	int test2 = -1;
	assert(ft_isascii(test2) == 0 && isascii(test2) == 0);

	int test3 = 128;
	assert(ft_isascii(test3) == 0 && isascii(test3) == 0);

	int test4 = 42;
	assert(ft_isascii(test4) != 0 && isascii(test4) != 0);

	return 0;
}
