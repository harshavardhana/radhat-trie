
#ifndef MURMURHASH3_H
#define MURMURHASH3_H

#include <stdlib.h>

#ifndef _CONFIG_H
#define _CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_STDINT_H
#include <stdint.h>
#else
#include "pstdint.h"
#endif

uint32_t hash(const char* data, size_t len);

#endif

