/* easter.c -- Butcher's algorithm to calculate easter day.
 * Author: Luis Colorado <luis.colorado@ericsson.com>
 * Date: Wed Apr  1 09:09:25 EEST 2015
 * Disclaimer: (C) 2015 Luis Colorado.  GPL v2.0.  This software is
 *      open source.
 */

#include "easter.h"

int easter(const int y)
{
    int A, B, C, D, E, F, G, H, I, K, L, M, N;

    P(A = y % 19);
    P(B = y / 100);
    P(C = y % 100);
    P(D = B / 4);
    P(E = B % 4);
    P(F = (B + 8) / 25);
    P(G = (B - F + 1) / 3);
    P(H = (19*A + B - D - G + 15) % 30);
    P(I = C / 4);
    P(K = C % 4);
    P(L = (32 + 2*(E + I) - H - K) % 7);
    P(M = (A + 11*(H + 2*L)) / 451);
    P(N = H + L - 7*M + 22);

    return N;
} /* easter */
