#include <assert.h>
#include <ctype.h>

int ft_isprint(int c);

int main(void) {
	// isprint [ctype library]:
	// the values returned are nonzero if the character c falls into the tested class, and zero if not
	int test0 = 32;
	assert(ft_isprint(test0) != 0 && isprint(test0) != 0);

	int test1 = 33;
	assert(ft_isprint(test1) != 0 && isprint(test1) != 0);

	int test2 = 126;
	assert(ft_isprint(test2) != 0 && isprint(test2)!= 0);

	int test3 = 127;
	assert(ft_isprint(test3) == 0 && isprint(test3) == 0);

	int test4 = 0;
	assert(ft_isprint(test4) == 0 && isprint(test4) == 0);

	int test5 = 31;
	assert(ft_isprint(test5) == 0 && isprint(test5) == 0);

	return 0;
}
