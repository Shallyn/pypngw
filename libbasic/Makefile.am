# Makefile.am
AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4
#pkgpyexecdir = ${HOME}/usr/local

lib_LTLIBRARIES = libpngwbasic.la
#bin_PROGRAMS = MAIN

libpngwbasic_la_SOURCES = basic_Error.c basic_Alloc.c basic_String.c basic_Debug.c \
utils_StringConvert.c utils_Factories.c utils_StringVector.c \
utils_OptionParser.c


libpngwbasic_la_LIBADD = -lgthread-2.0 -lconfig
libpngwbasic_la_LDFLAGS = -module -avoid-version

bin_PROGRAMS = MAIN

MAIN_SOURCES = main.c
MAIN_LDADD = libpngwbasic.la

all:$(bin_PROGRAMS)
$(bin_PROGRAMS): $(lib_LTLIBRARIES)
