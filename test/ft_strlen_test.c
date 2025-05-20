#include <assert.h>
#include <string.h>

size_t ft_strlen(const char *s);

int main(void) {
	//	strlen [string library]:
	//	the strlen() function returns the number of bytes in the string pointed to by s
	char *test0 = "Hello, 42 prague";
	assert(ft_strlen(test0) == strlen(test0));

	char *test1 = "\0";
	assert(ft_strlen(test1) == strlen(test1));

	char *test2 = "";
	assert(ft_strlen(test2) == strlen(test2));

	char *test3 = "\a        Hi.";
	assert(ft_strlen(test3) == strlen(test3));

	char *test4 = "LOOOOOOO\0OOOOOONG";
	assert(ft_strlen(test4) == strlen(test4));

	char *test5 = "Hello, 42\n prague";
	assert(ft_strlen(test5) == strlen(test5));

	char *test6 = "123412412421";
	assert(ft_strlen(test6) == strlen(test6));

	return 0;
}

