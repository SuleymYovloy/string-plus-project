#include "s21_string.h"

// int memcmp(const void *str1, const void *str2, size_t n) {
//     const unsigned char* s1 = (const unsigned char*)str1;
//     const unsigned char* s2 = (const unsigned char*)str2;

//     for (size_t i = 0; i < n; i++) {
//         if (s1[i] < s2[i]) {
//             return s1[i] - s2[i];
//         } else if (s1[i] > s2[i])
//         {
//             return s2[i] - s1[i] ;
//         } else if (s1[i] == s2[i])
//         {
//             return 0;
//         }
        
        
//     }
//     return NULL;
// }

int memcmp(const void *str1, const void *str2, size_t n) {
    const unsigned char* s1 = (const unsigned char*)str1;
    const unsigned char* s2 = (const unsigned char*)str2;

    for (size_t i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return 0;
}

int main(void) {
    char buffer1[] = "abcdef";
    char buffer2[] = "abcxyz";

    int result = memcmp(buffer1, buffer2, 6);

    if (result < 0) {
        printf("Buffer1 is less than Buffer2\n");
    } else if (result == 0) {
        printf("Buffer1 is equal to Buffer2\n");
    } else {
        printf("Buffer1 is greater than Buffer2\n");
    }

    return 0;
}
