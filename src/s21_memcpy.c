#include "s21_string.h"

void *memcpy(void *dest_str, const void * src_str, size_t n) {
    unsigned char* dest = ( unsigned char*)dest_str;
    const unsigned char* src = (const unsigned char*)src_str;

    for (size_t i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest_str;
}

int main() {
    char src[50] = "This is a test string.";
    char dest[50];

    memcpy(dest, src, strlen(src) + 1); // Копируем строку вместе с завершающим нулем

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}