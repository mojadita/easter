/* easter_test.c -- main program to test easter dates.
 * Author: Luis Colorado <luis.colorado@ericsson.com>
 * Date: Wed Apr  1 09:15:59 EEST 2015
 * Copyright: (C) 2015 Luis Colorado <luis.colorado@ericsson.com>
 *      GPL v2.0. This software is Open Source.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "easter.h"

char *mn[] = {
    "march","april"
};

int main(int argc, char **argv)
{
    int i;
    for (i = 1; i < argc; i++) {
        int year;
        int res, m, d;
        res = sscanf(argv[i], "%d", &year);
        if (res != 1) {
            fprintf(stderr,
                    D("Error: argument %s doesn't parse as a number. "
                        "Ignored\n"),
                    argv[i]);
            continue;
        } /* if */
        d = easter(year);
        m = (d > 31);
        if (m) d -= 31;
        printf(D(
#if DEBUG
                    " "
#endif
                    "easter(%d) = %s/%d\n"),
                year, mn[m], d);
    } /* for */
    return EXIT_SUCCESS;
} /* main */
