#include <stdio.h>

char* find_char(const char* str, int c) {
    while (*str && *str != (char)c) {
        str++;
    }
    return (*str == (char)c) ? (char*)str : NULL;
}

int main(void) {
    char search_char[] = "a";
    char search_string[] = "school_21";

    char* result = find_char(search_string, search_char[0]);

    if (result) {
        printf("'%s' найден на позиции %ld\n", search_char, result - search_string + 1);
    }
    else {
        printf("'%s' не найден\n", search_char);
    }

    return 0;
}
