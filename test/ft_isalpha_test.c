#include <assert.h>
#include <ctype.h>

int ft_isalpha(int c);

int main(void) {
	// isalpha [ctype library]:
	// The values returned are nonzero if the character c falls into the tested class, and zero if not.
	int test0 = 'a';
	assert(ft_isalpha(test0) != 0 && isalpha(test0) != 0);

	int test1 = 'A';
	assert(ft_isalpha(test1) != 0 && isalpha(test1) != 0);

	int test2 = 'z';
	assert(ft_isalpha(test2) != 0 && isalpha(test2) != 0);

	int test3 = 'Z';
	assert(ft_isalpha(test3) != 0 && isalpha(test3) != 0);

	int test4 = 0;
	assert(ft_isalpha(test4) == 0 && isalpha(test4) == 0);

	int test5 = -42;
	assert(ft_isalpha(test5) == 0 && isalpha(test5) == 0);

	int test6 = '{';
	assert(ft_isalpha(test6) == 0 && isalpha(test6) == 0);

	int test7 = '@';
	assert(ft_isalpha(test7) == 0 && isalpha(test7) == 0);

	int test8 = ']';
	assert(ft_isalpha(test8) == 0 && isalpha(test8) == 0);

	int test9 = '`';
	assert(ft_isalpha(test9) == 0 && isalpha(test9) == 0);

	return 0;
}
