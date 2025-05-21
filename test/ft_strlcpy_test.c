#include <assert.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);

int main(void) {
	char dest0[10] = "Hello";
	const char *src0 = "pop";
	const char *target0 = "Hepop";
	ft_strlcpy(dest0+2,src0,4);
	assert(!strcmp((char *)dest0,(char *)target0));

	char dest1[10] = "";
	const char *src1 = "Copy me";
	const char *target1 = "Copy me";
	ft_strlcpy(dest1,src1,8);
	assert(!strcmp((char *)dest1,(char *)target1));

	char dest2[10] = "...o...";
	const char *src2 = "X...";
	const char *target2 = "...X...";
	ft_strlcpy(dest2+3,src2,5);
	assert(!strcmp((char *)dest2,(char *)target2));

	char dest3[10] = "Hello";
	const char *src3 = "pop";
	const char *target3 = "Hepop";
	ft_strlcpy(dest3+2,src3,4);
	assert(!strcmp((char *)dest3,(char *)target3));

	return 0;
}
