/* easter.h -- Butcher's algorithm to calculate easter day.
 * Author: Luis Colorado <luis.colorado@ericsson.com>
 * Date: Wed Apr  1 09:04:29 EEST 2015
 * Disclaimer: (C) 2015 Luis Colorado.  GPL v2.0.  This software is
 *      open source.
 */
#ifndef _EASTER_TEST_H
#define _EASTER_TEST_H

#define D(x) __FILE__":%d:%s:" x, __LINE__, __FUNCTION__

#ifdef NDEBUG && NDEBUG
#include <stdio.h>
#define P(x) do { printf(D(" %s => %d\n"), #x, x); } while (0)
#else
#define P(x) x
#endif

#endif /* _EASTER_TEST_H */
