#include <string.h>
#include <assert.h>

static int bffs_match(void *a, void *b, size_t size) {
	unsigned char *aptr = (unsigned char *)a;
	unsigned char *bptr = (unsigned char *)b;
	while (size--) {
		if (*aptr++ != *bptr++)
			return 0;
	}
	return 1;
}

void *ft_memset(void *s, int c, size_t n);

int main(void) {
	//	memset [string lib]
	//	the memset() function returns a pointer to the memory area s
	char buffer0[6] = "Hello!";
	size_t size = 5;
	assert(bffs_match(ft_memset(buffer0,'a',size),memset(buffer0,'a',size),size));

	char buffer1[1] = "\0";
	size = 1;
	assert(bffs_match(ft_memset(buffer1,'a',size),memset(buffer1,'a',size),size));

	char buffer2[19] = "\0MEEEMORY LEEEEAK";
	size = 19;
	assert(bffs_match(ft_memset(buffer2,'a',size),memset(buffer2,'a',size),size));

	char buffer3[19] = "\0MEEEMORY LEEEEAK";
	size = 10;
	assert(bffs_match(ft_memset(buffer3,0,size),memset(buffer3,0,size),size));

	return 0;
}
