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

#define YEAR    ((((365UL*4+1)*25-1)*4+1)*86400/400)

void process(int year);

char *mn[] = {
    "march","april"
};

int main(int argc, char **argv)
{
    int i;
    if (argc > 1) for (i = 1; i < argc; i++) {
        int year;
        int res;
        res = sscanf(argv[i], "%d", &year);
        if (res != 1) {
            fprintf(stderr,
                    D("Error: argument %s doesn't parse as a number. "
                        "Ignored\n"),
                    argv[i]);
            continue;
        } /* if */
        process(year);
    } else {
        process(time(NULL) / YEAR + 1970);
    } /* if */
    return EXIT_SUCCESS;
} /* main */

void process(int year)
{
    int d, m;

    d = easter(year);
    m = (d > 31);
    if (m) d -= 31;
    printf(D(
#if DEBUG
                " "
#endif
                "easter(%d) = %s/%d\n"),
            year, mn[m], d);
} /* process */
