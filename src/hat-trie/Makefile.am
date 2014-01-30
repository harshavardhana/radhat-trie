
ibtrie_la_CFLAGS = -fPIC -Wall -g -shared -nostartfiles

libtrie_la_CPPFLAGS = -D_FILE_OFFSET_BITS=64 -D__USE_FILE_OFFSET64 -D_GNU_SOURCE

lib_LTLIBRARIES = libhat-trie.la

libhat_trie_la_SOURCES = common.h \
                         ahtable.h        ahtable.c \
                         hat-trie.h       hat-trie.c \
                         misc.h           misc.c \
                         murmurhash3.h    murmurhash3.c

pkginclude_HEADERS = hat-trie.h ahtable.h common.h pstdint.h

CLEANFILES = *~



