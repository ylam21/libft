#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int main(void) {
    // Test 1: Basic string overwrite
    char str1[20] = "Hello, world!";
    ft_memset(str1 + 7, '*', 5);
    printf("Test 1: %s\n", str1); // Expected: "Hello, *****d!"

    // Test 2: Full overwrite
    char str2[6] = "abcde";
    ft_memset(str2, 'x', 5);
    str2[5] = '\0'; // Ensure null-termination for printing
    printf("Test 2: %s\n", str2); // Expected: "xxxxx"

    // Test 3: Zero length
    char str3[10] = "123456789";
    ft_memset(str3, 'Z', 0);
    printf("Test 3: %s\n", str3); // Expected: "123456789" (unchanged)

    // Test 4: Set to zero
    char str4[10] = "abcdefghi";
    ft_memset(str4, 0, 5);
    printf("Test 4: ");
    for (int i = 0; i < 9; i++) {
        if (str4[i] == 0)
            printf("\\0");
        else
            printf("%c", str4[i]);
    }
    printf("\n"); // Expected: "\0\0\0\0\0fghi"

    // Test 5: Integer array
    int arr[5] = {1, 2, 3, 4, 5};
    ft_memset(arr, 0, sizeof(arr));
    printf("Test 5: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Expected: "0 0 0 0 0"

    return 0;
}
