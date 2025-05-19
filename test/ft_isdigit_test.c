#include <assert.h>
#include <ctype.h>

int ft_isdigit(int c);

int main(void) {
	// isdigit [ctype library]:
	// The values returned are nonzero if the character c falls into the tested class, and zero if not.
	int test0 = '0';
	assert(ft_isdigit(test0) != 0 && isdigit(test0) != 0);

	int test1 = '9';
	assert(ft_isdigit(test1) != 0 && isdigit(test1) != 0);

	int test2 = 47;
	assert(ft_isdigit(test2) == 0 && isdigit(test2) == 0);

	int test3 = 58;
	assert(ft_isdigit(test3) == 0 && isdigit(test3) == 0);

	int test4 = 0;
	assert(ft_isdigit(test4) == 0 && isdigit(test4) == 0);

	int test5 = 10;
	assert(ft_isdigit(test5) == 0 && isdigit(test5) == 0);

	int test6 = '{';
	assert(ft_isdigit(test6) == 0 && isdigit(test6) == 0);

	int test7 = '@';
	assert(ft_isdigit(test7) == 0 && isdigit(test7) == 0);

	int test8 = ']';
	assert(ft_isdigit(test8) == 0 && isdigit(test8) == 0);

	int test9 = '`';
	assert(ft_isdigit(test9) == 0 && isdigit(test9) == 0);

	return 0;
}
