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

	int test3 = -1;
	assert(ft_isascii(test3) == 0 && isascii(test3) == 0);

	int test4 = 128;
	assert(ft_isascii(test4) == 0 && isascii(test4) == 0);

	int test5 = 42;
	assert(ft_isascii(test5) != 0 && isascii(test5) != 0);

	return 0;
}
