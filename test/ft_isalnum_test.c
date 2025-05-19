#include <assert.h>
#include <ctype.h>

int ft_isalnum(int c);

int main(void) {
	// isalnum [ctype library]:
	// the values returned are nonzero if the character c falls into the tested class, and zero if not
	int test0 = 'A';
	assert(ft_isalnum(test0) != 0 && isalnum(test0) != 0);

	int test1 = 'Z';
	assert(ft_isalnum(test1) != 0 && isalnum(test1) != 0);

	int test2 = 'a';
	assert(ft_isalnum(test2) != 0 && isalnum(test2) != 0);

	int test3 = 'z';
	assert(ft_isalnum(test3) != 0 && isalnum(test3) != 0);

	int test4 = '0';
	assert(ft_isalnum(test4) != 0 && isalnum(test4) != 0);

	int test5 = '9';
	assert(ft_isalnum(test5) != 0 && isalnum(test5) != 0);

	int test6 = 64;
	assert(ft_isalnum(test6) == 0 && isalnum(test6) == 0);

	int test7 = 91;
	assert(ft_isalnum(test7) == 0 && isalnum(test7) == 0);

	int test8 = 96;
	assert(ft_isalnum(test8) == 0 && isalnum(test8) == 0);

	int test9 = 123;
	assert(ft_isalnum(test9) == 0 && isalnum(test9) == 0);

	int test10 = 47;
	assert(ft_isalnum(test10) == 0 && isalnum(test10) == 0);

	int test11 = 58;
	assert(ft_isalnum(test11) == 0 && isalnum(test11) == 0);

	int test12 = 0;
	assert(ft_isalnum(test12) == 0 && isalnum(test12) == 0);

	return 0;
}
