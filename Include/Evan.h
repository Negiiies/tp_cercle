#ifndef EVAN_H_
#define EVAN_H_
#include <lapin.h>
void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);
void put_pixel(t_bunny_pixelarray * pxa,
               t_bunny_position *pos,
               unsigned int color);
double deg_to_rads(int degrees);


#endif /*EVAN_H_*/
