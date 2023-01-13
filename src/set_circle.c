/*
 * E89 Pedagogical & Technical Lab
 * project:     circule
 * created on:  2023-01-12 - 10:42 +0100
 * 1st author:  dylan.le - dylan.le
 * description: cercle
 */

#include <stdio.h>
#include <math.h>
#include <lapin.h>
#include "Evan.h"
double deg_to_rads(int degrees);

void stu_set_circle(t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius)
{
    t_bunny_position pos;
    int i;

    i = 0;
    while(i < 360) {
        pos.y = y + (radius * sin(deg_to_rads(i)));
        pos.x = x + (radius * cos(deg_to_rads(i)));
        put_pixel (pxa, &pos, WHITE);
        i += 1;
    }
}
