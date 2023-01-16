/*
 * E89 Pedagogical & Technical Lab
 * project:     cercle
 * created on:  2023-01-12 - 09:56 +0100
 * 1st author:  dylan.le - dylan.le
 * description: tracé
 */

#include <stdio.h>
#include <math.h>

double deg_to_rads(int degrees)
{
    double rad;

    rad = (degrees *M_PI/180);
    return (rad);
}
