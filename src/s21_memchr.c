#include <stdio.h>
#include "s21_string.h"

void* memchr(const void* str, int c, size_t n) {
    const unsigned char* s = (const unsigned char*)str;

    for (size_t i = 0; i < n; i++) {
        if (s[i] == (unsigned char)c) {
            return (void*)&s[i];
        }
    }
    return NULL;
}

int main(void) {
    const char* string = "Hello school21!";
    int search_char = 's';
    size_t n = 5;

    char* result = (char*)memchr(string, search_char, n);

    if (result) {
        printf("'%c' найден на позиции %ld.\n", search_char, result - string + 1);
    }
    else {
        printf("'%c' не найден в указанных байтах строки!\n", search_char);
    }

    return 0;
}