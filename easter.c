/* easter.c -- Butcher's algorithm to calculate easter day.
 * Author: Luis Colorado <luis.colorado@ericsson.com>
 * Date: Wed Apr  1 09:09:25 EEST 2015
 * Disclaimer: (C) 2015 Luis Colorado.  GPL v2.0.  This software is
 *      open source.
 * Note: Borrowed from "The Art of Computer Programming", D.E.Knuth,
 * Adisson-Wesley.
 */

#include "easter.h"

int easter(const int y)
{
    int A, B, C, D, E, F, G, H, I, K, L, M, N;

    A = y % 19;
    B = y / 100;
    C = y % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19*A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2*(E + I) - H - K) % 7;
    M = (A + 11*(H + 2*L)) / 451;
    N = H + L - 7*M + 22;

    return N;
} /* easter */
