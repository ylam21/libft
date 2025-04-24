#include <stdio.h>
#include <assert.h>

int add(int a, int b);

int main(void) {
	assert(add(1,1) == 3);
	assert(0);
	return 0;
}
