#pragma once

#include <stdarg.h>
#include <stddef.h>

extern void* __memcpy_i386(void*, const void*, size_t);
extern void* __memset_i386(void*, int, size_t);
extern char  __memcmp_i386(const void*, const void*, size_t);