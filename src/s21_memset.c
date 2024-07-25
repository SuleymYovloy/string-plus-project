#include <stdio.h>
#include "s21_string.h"

void* memset(void* str, int c, size_t n) {
    unsigned char* dest = (unsigned char*)str;
    for (size_t i = 0; i < n; i++) {
        dest[i] = (unsigned char)c;
    }
    return str;
}


int main() {
    char buffer[10];
    memset(buffer, 222, sizeof(buffer));

    for (int i = 0; i < sizeof(buffer); i++) {
        printf("0x%02X ", (unsigned char)buffer[i]);
    }
    printf("\n");

    return 0;
}