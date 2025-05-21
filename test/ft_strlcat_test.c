#include <assert.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void) {

	char dest0[10] = "con";
	const char *src0 = "cat me";
	const char *target0 = "concat me";
	ft_strlcat(dest0,src0,7);
	assert(!strcmp((char *)dest0,(char *)target0));

	char dest1[10] = "->";
	const char *src1 = "<-";
	const char *target1 = "-><-";
	ft_strlcat(dest1,src1,5);
	assert(!strcmp((char *)dest1,(char *)target1));

	char dest2[10] = "";
	const char *src2 = "";
	const char *target2 = "";
	ft_strlcat(dest2+3,src2,1);
	assert(!strcmp((char *)dest2,(char *)target2));

	char dest3[10] = "Hello";
	const char *src3 = "\0";
	const char *target3 = "Hello";
	ft_strlcat(dest3+2,src3,5);
	assert(!strcmp((char *)dest3,(char *)target3));

	return 0;
}
