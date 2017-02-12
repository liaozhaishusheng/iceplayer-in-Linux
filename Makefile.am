AUTOMAKE_OPTIONS= foreign 
bin_PROGRAMS= iceplayer
iceplayer_SOURCES=about.c download.h instance.h about.h  equalizer.c keybinding.c  equalizer.h keybinding.h single.c help.c list.c single.h core.c help.h list.h ui.c common.c core.h id3.c lrc.c ui.h common.h id3.h lrc.h update.c configure.c desktop_lrc.c main.c update.h configure.h desktop_lrc.h  widget_lrc.c download.c instance.c widget_lrc.h mini.c mini.h
AM_CPPFLAGS  = `pkg-config gtk+-2.0 --cflags` `pkg-config --cflags gstreamer-0.10` 
AM_LDFLAGS   = `pkg-config gtk+-2.0 --libs` `pkg-config --libs gstreamer-0.10` -lX11 -lnotify
SUBDIRS = data data/skin data/skin/blue_life_slax data/skin/mac_slax data/skin/new_style_slax data/skin/koukou_slax
prefix=/usr
