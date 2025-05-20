#include <stdio.h>
#include <strings.h>
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

void ft_bzero(void *s,size_t n);

int main(void) {
	char buffer0[10] = "Hello, 42!";
	ft_bzero(buffer0+3,2);
	char buffer1[10] = "Hello, 42!";
	bzero(buffer1+3,2);
	assert(bffs_match(buffer0,buffer1,3));

	char buffer3[0] = "";
	ft_bzero(buffer3,0);
	char buffer4[0] = "";
	bzero(buffer4,0);
	assert(bffs_match(buffer3,buffer4,0));

	char buffer5[1] = "0";
	ft_bzero(buffer5,0);
	char buffer6[1] = "0";
	bzero(buffer6,0);
	assert(bffs_match(buffer5,buffer6,1));

	char buffer7[5] = "Ioooo";
	ft_bzero(buffer7+1,4);
	char buffer8[5] = "Ioooo";
	bzero(buffer8+1,4);
	assert(bffs_match(buffer7,buffer8,0));

	char buffer9[8] = "\0Try me!";
	ft_bzero(buffer9,8);
	char buffer10[8] = "\0Try me!";
	bzero(buffer10,8);
	assert(bffs_match(buffer9,buffer10,0));

	return 0;
}
