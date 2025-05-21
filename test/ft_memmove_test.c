#include <assert.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void) {
	unsigned char src0[50] = "kiwi";
	unsigned char dest0[50] = "I like lima";
	unsigned char *_dest0 = dest0;
	unsigned char check0[50] = "I like kiwi";
	ft_memmove(dest0+7,src0,4);
	assert(!(strcmp((char *)check0,(char *)_dest0)));

	unsigned char src1[50] = "kiwi";
	unsigned char dest1[50] = "";
	unsigned char *_dest1 = dest1;
	unsigned char check1[50] = "kiwi";
	ft_memmove(dest1,src1,4);
	assert(!(strcmp((char *)check1,(char *)_dest1)));

	unsigned char src2[50] = "\0";
	unsigned char dest2[50] = "I like lima";
	unsigned char *_dest2 = dest2;
	unsigned char check2[50] = "I like";
	ft_memmove(dest2+6,src2,1);
	assert(!(strcmp((char *)check2,(char *)_dest2)));

	unsigned char src3[50] = "TrUck Fell DOwN";
	unsigned char dest3[50] = "Rewrite me please";
	unsigned char *_dest3 = dest3;
	unsigned char check3[50] = "TrUck Fell DOwN";
	ft_memmove(dest3,src3,50);
	assert(!(strcmp((char *)check3,(char *)_dest3)));

	unsigned char src4[50] = "?";
	unsigned char dest4[50] = "question!";
	unsigned char *_dest4 = dest4;
	unsigned char check4[50] = "question?";
	ft_memmove(dest4+8,src4,1);
	assert(!(strcmp((char *)check4,(char *)_dest4)));

	return 0;
}
