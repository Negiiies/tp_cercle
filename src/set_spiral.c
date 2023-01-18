/*
 * E89 Pedagogical & Technical Lab
 * project:     spiral
 * created on:  2023-01-13 - 15:29 +0100
 * 1st author:  dylan.le - dylan.le
 * description: spil
 */

#include "Evan.h"
#include <math.h>
#include <lapin.h>
#include <stdio.h>

double deg_to_rads(int degrees);

void stu_set_spiral(t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius,
                    int loops)
{
    t_bunny_position pos;
    int i;
    float j;
    float stk;
    int k;

    k = 0;
    j = 0;
    i = 0;
    k = 0;
    stk = radius;
    j = (float)radius/360;
    while(k <= loops) {
        k += 1;
        while(i <= 360 * loops) {
            stk += j;
            pos.y = y + ( stk * sin(deg_to_rads(i)));
            pos.x = x + ( stk * cos(deg_to_rads(i)));
            put_pixel (pxa, &pos, WHITE);
            i += 1;
        }
        k += 1;
    }
}
