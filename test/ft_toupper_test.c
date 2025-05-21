#include <assert.h>
#include <ctype.h>

int ft_toupper(int c);

int main(void) {
	for (int c=0;c<256;c++) {
		assert(ft_toupper(c) == toupper(c));
	}

	return 0;
}
