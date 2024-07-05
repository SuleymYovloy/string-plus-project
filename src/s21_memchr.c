// #include <stdio.h>

// int search_char = 'к';
// char search_string[] = "Си разрабатывался как язык системного программирования.";

// char* find_char(const char* str, int c) {
//     while (*str) {
//         if (*str == (char)c) {
//             return (char*)str;
//         }
//         str++;
//     }
//     return NULL;
// }

// int main(void) {
//     printf("Строка поиска:\n%s\n", search_string);
//     printf("Искомый символ: %c\n", search_char);

//     char* found_position = find_char(search_string, search_char);

//     if (found_position) {
//         int position = found_position - search_string + 1;
//         printf("Result: %c found at position %d\n", search_char, position);
//     }
//     else {
//         printf("Result: %c not found\n", search_char);
//     }

//     return 0;
// }

#include <stdio.h>

// Функция для поиска первого вхождения символа в строке
char* find_char(const char* str, int c) {
    while (*str) {
        if (*str == (char)c) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

int main(void) {
    // Искомый символ и строка для поиска
    char search_char[] = "я"; // Используем строку вместо символа
    char search_string[] = "Си разрабатывался как язык системного программирования.";

    printf("Строка поиска:\n%s\n", search_string);
    printf("Искомый символ: %s\n", search_char); // Выводим как строку

    // Поиск первого вхождения символа
    char* found_position = find_char(search_string, search_char[0]); // Используем первый символ строки

    // Проверка результата
    if (found_position) {
        int position = found_position - search_string + 1;
        printf("Результат: %s найден на позиции %d\n", search_char, position);
    }
    else {
        printf("Результат: %s не найден\n", search_char);
    }

    return 0;
}

void* s21_memchr(const void* str, int c, s21_size_t n) {
    const unsigned char* s = (const unsigned char*)str;
    char* res = S21_NULL;
    s21_size_t i = 0;
    while (res == S21_NULL && i < n) {
        if (s[i] == c) res = (void*)s + i;
        i++;
    }
    return res;
}