TESTS = check_ahtable check_hattrie
check_PROGRAMS = check_ahtable check_hattrie

check_ahtable_SOURCES  = check_ahtable.c $(CONTRIBDIR)/strmap/str_map.c \
	$(CONTRIBDIR)/strmap/str_map.h
check_ahtable_LDADD    = $(top_builddir)/src/hat-trie/libhat-trie.la
check_ahtable_CPPFLAGS = -I$(top_builddir)/src/hat-trie -I$(CONTRIBDIR)/strmap

check_hattrie_SOURCES  = check_hattrie.c $(CONTRIBDIR)/strmap/str_map.c \
	$(CONTRIBDIR)/strmap/str_map.c
check_hattrie_LDADD    = $(top_builddir)/src/hat-trie/libhat-trie.la
check_hattrie_CPPFLAGS = -I$(top_builddir)/src/hat-trie -I$(CONTRIBDIR)/strmap
