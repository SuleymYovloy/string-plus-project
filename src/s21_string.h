#ifndef MY_STRING_H
#define MY_STRING_H

#include <stddef.h>
#include <stdio.h>

void* memchr(const void* str, int c, size_t n);
int memcmp(const void *str1, const void *str2, size_t n);
void *memcpy(void *dest_str, const void * src_str, size_t n);

#endif  // MY_STRING_H