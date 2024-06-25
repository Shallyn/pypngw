# Makefile.am
AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4
#pkgpyexecdir = ${HOME}/usr/local

lib_LTLIBRARIES = libpngw.la
#bin_PROGRAMS = MAIN

libpngw_la_SOURCES = pngw_Utils.c pngw.c pngw_Upart.c pngw_Lpart.c pngw_Epart.c pngw_LEpart.c


libpngw_la_LIBADD = ../libbasic/libpngwbasic.la
libpngw_la_LDFLAGS = -module -avoid-version

#MAIN_SOURCES = main.c
#MAIN_LDADD = libTjTutils.la

#all:$(bin_PROGRAMS)
#$(bin_PROGRAMS): $(lib_LTLIBRARIES) 	
all:$(lib_LTLIBRARIES) 