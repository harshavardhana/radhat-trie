/*
  Copyright (c) 2013 Harshavardhana

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file is part of trie-collection

  Original Author : Daniel C. Jones <dcjones@cs.washington.edu>
*/

#include <stdlib.h>

#include "misc.h"

void* malloc_or_die(size_t n)
{
    void* p = malloc(n);
    if (p == NULL && n != 0) {
        fprintf(stderr, "Cannot allocate %zu bytes.\n", n);
        exit(EXIT_FAILURE);
    }
    return p;
}


void* realloc_or_die(void* ptr, size_t n)
{
    void* p = realloc(ptr, n);
    if (p == NULL && n != 0) {
        fprintf(stderr, "Cannot allocate %zu bytes.\n", n);
        exit(EXIT_FAILURE);
    }
    return p;
}


FILE* fopen_or_die(const char* path, const char* mode)
{
    FILE* f = fopen(path, mode);
    if (f == NULL) {
        fprintf(stderr, "Cannot open file %s with mode %s.\n", path, mode);
        exit(EXIT_FAILURE);
    }
    return f;
}
