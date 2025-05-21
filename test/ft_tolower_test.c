#include <assert.h>
#include <ctype.h>

int ft_tolower(int c);

int main(void) {
	for (int c=0;c<256;c++) {
		assert(ft_tolower(c) == tolower(c));
	}

	return 0;
}

