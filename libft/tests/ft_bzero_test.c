#include <stdio.h>
#include <string.h>

// Your bzero implementation
void bzero(void *s, size_t n);

void print_buffer(char *buf, size_t len) {
    for (size_t i = 0; i < len; ++i) {
        printf("%02x ", (unsigned char)buf[i]);
    }
    printf("\n");
}

int main() {
    char buffer[10];

    // Test 1: Fill with non-zero first
    memset(buffer, 'A', sizeof(buffer));
    bzero(buffer, 10);

    printf("Test 1 - Full buffer:\n");
    print_buffer(buffer, 10);  // Expect: 00 00 00 ... (10 times)

    // Test 2: Partial zeroing
    memset(buffer, 'B', sizeof(buffer));
    bzero(buffer, 5);

    printf("Test 2 - Partial zero:\n");
    print_buffer(buffer, 10);  // Expect: 00 00 00 00 00 42 42 42 42 42

    // Test 3: Zero length
    memset(buffer, 'C', sizeof(buffer));
    bzero(buffer, 0);

    printf("Test 3 - Zero length:\n");
    print_buffer(buffer, 10);  // Expect: 43 43 43 ... unchanged

    return 0;
}
