# Makefile -- makefile for easter program.
# Author: Luis Colorado <luis.colorado@ericsson.com>
# Date: Wed Apr  1 09:24:39 EEST 2015
# Disclaimer: (C) 2015 Luis Colorado. GPL v2.0. This software is open
# source.

targets = easter

all: $(targets)
clean:
	$(RM) $(targets) $(foreach i, $(targets), $($(i)_objs))

easter_objs = easter_test.o easter.o
easter_libs =
easter: $(easter_objs)
	$(CC) $(LDFLAGS) -o $@ $(easter_objs) $(easter_libs)

$(easter_objs): easter.h
easter_test.o: easter_test.h
