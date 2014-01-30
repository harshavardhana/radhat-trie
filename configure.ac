dnl This file is part of radhat-trie
dnl

dnl Every other copy of the package version number gets its value from here
AC_INIT([radhat-trie], 0.1, harsha@harshavardhan.net, ,[https://github.com/harshavardhana/radhat-trie])

AM_INIT_AUTOMAKE

if make --help 2>&1 | grep -q no-print-directory; then
   AM_MAKEFLAGS="$AM_MAKEFLAGS --no-print-directory";
fi

if make --help 2>&1 | grep -q quiet; then
   AM_MAKEFLAGS="$AM_MAKEFLAGS --quiet"
fi

if libtool --help 2>&1 | grep -q quiet; then
   AM_LIBTOOLFLAGS="--quiet";
fi

dnl create a config.h file (Automake will add -DHAVE_CONFIG_H)
AC_CONFIG_HEADERS(config.h)
AC_GNU_SOURCE

AC_SUBST(VERSION)
ISODATE=`date +%Y-%m-%d`
AC_SUBST(ISODATE)
AC_CANONICAL_HOST

AC_CONFIG_FILES([Makefile
	        src/Makefile
		src/trie/Makefile
		src/hat-trie/Makefile
		tests/Makefile
		doc/Makefile])

AC_PROG_CC
AC_PROG_LIBTOOL

dnl
dnl Word sizes...
dnl
AC_CHECK_SIZEOF(short)
AC_CHECK_SIZEOF(int)
AC_CHECK_SIZEOF(long)
AC_CHECK_SIZEOF(long long)
SIZEOF_SHORT=$ac_cv_sizeof_short
SIZEOF_INT=$ac_cv_sizeof_int
SIZEOF_LONG=$ac_cv_sizeof_long
SIZEOF_LONG_LONG=$ac_cv_sizeof_long_long
AC_SUBST(SIZEOF_SHORT)
AC_SUBST(SIZEOF_INT)
AC_SUBST(SIZEOF_LONG)
AC_SUBST(SIZEOF_LONG_LONG)

AC_CHECK_TOOL([LD],[ld])

dnl Check for pkg-config
PKG_PROG_PKG_CONFIG

CONTRIBDIR='$(top_srcdir)/contrib'
AC_SUBST(CONTRIBDIR)
AC_SUBST(AM_MAKEFLAGS)
AC_SUBST(AM_LIBTOOLFLAGS)

AC_OUTPUT
