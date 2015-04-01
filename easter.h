/* easter.h -- Butcher's algorithm to calculate easter day.
 * Author: Luis Colorado <luis.colorado@ericsson.com>
 * Date: Wed Apr  1 09:04:29 EEST 2015
 * Disclaimer: (C) 2015 Luis Colorado.  GPL v2.0.  This software is
 *      open source.
 */
#ifndef _EASTER_H
#define _EASTER_H

#ifndef DEBUG
#define DEBUG 0
#endif

#if DEBUG
#include <stdio.h>
#define D(x) __FILE__":%d:%s:" x, __LINE__, __FUNCTION__
#define P(x) do { printf(D(" "#x),x); } while (0)
#else
#define D(x) x
#define P(x) x
#endif

int easter(const int y);

#endif /* _EASTER_H */
