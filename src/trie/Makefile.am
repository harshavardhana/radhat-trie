libtrie_la_CFLAGS = -fPIC  -Wall -g -shared -nostartfiles

libtrie_la_CPPFLAGS = -D_FILE_OFFSET_BITS=64 -D__USE_FILE_OFFSET64 -D_GNU_SOURCE

lib_LTLIBRARIES = libtrie.la

libtrie_la_SOURCES = trie.c trie.h

pkginclude_HEADERS = trie.h

CLEANFILES = *~
