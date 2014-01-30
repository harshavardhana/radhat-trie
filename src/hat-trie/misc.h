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

#ifndef LINESET_MISC_H
#define LINESET_MISC_H

#ifndef _CONFIG_H
#define _CONFIG_H
#include "config.h"
#endif

#include <stdio.h>

void* malloc_or_die(size_t);
void* realloc_or_die(void*, size_t);
FILE* fopen_or_die(const char*, const char*);

#endif
