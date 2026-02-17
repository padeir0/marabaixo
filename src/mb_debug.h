/*
MIT License
Copyright 2025 Artur Iure Vianna Fernandes
See the LICENSE file for more information.
*/

#ifndef MB_debug_H
#define MB_debug_H

#include <stdio.h>

#define MB_debug_fatal(fmt, ...)                                    \
      fprintf(stderr, "[DEBUG] %s:%s:%d\n",                   \
              __FILE__, __func__, __LINE__);                  \
      fprintf(stderr, "\t" fmt "\n", ##__VA_ARGS__);          \
      abort();                                                
#endif
