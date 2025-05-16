#include <stdio.h>
#include <string.h>
#include <assert.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

void print_buffer(const char *label, const void *buf, size_t n) {
    const unsigned char *p = buf;
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", p[i]);
    }
    printf("\n");
}

void test_basic_copy() {
    char src[] = "Hello, world!";
    char dst[20] = {0};

    ft_memcpy(dst, src, 13);
    assert(strcmp(dst, "Hello, world!") == 0);
    printf("test_basic_copy passed\n");
}

void test_zero_bytes() {
    char src[] = "abcdef";
    char dst[] = "123456";

    ft_memcpy(dst, src, 0);
    assert(strcmp(dst, "123456") == 0);
    printf("test_zero_bytes passed\n");
}

void test_partial_copy() {
    char src[] = "abcdef";
    char dst[10] = "123456";

    ft_memcpy(dst, src, 3);  // Should copy "abc"
    assert(dst[0] == 'a' && dst[1] == 'b' && dst[2] == 'c');
    assert(dst[3] == '4'); // unchanged
    printf("test_partial_copy passed\n");
}

void test_non_string_data() {
    int src[] = {1, 2, 3, 4};
    int dst[4] = {0};

    ft_memcpy(dst, src, sizeof(src));
    assert(dst[0] == 1 && dst[3] == 4);
    printf("test_non_string_data passed\n");
}

void test_overlap_behavior() {
    char buffer[] = "1234567890";

    // memcpy has undefined behavior with overlapping memory, but you can test how your implementation handles it
    ft_memcpy(buffer + 2, buffer, 5); // Overlapping regions
    print_buffer("test_overlap_behavior", buffer, 10);
    printf("test_overlap_behavior done (undefined behavior)\n");
}

int main() {
    test_basic_copy();
    test_zero_bytes();
    test_partial_copy();
    test_non_string_data();
    test_overlap_behavior();

    return 0;
}
