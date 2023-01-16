#ifndef EVAN_H_
#define EVAN_H_
void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);
void put_pixel(t_bunny_pixelarray * pxa,
               t_bunny_position *pos,
               unsigned int color);
float get_ratio(int a, int b, int x);
int get_value(int a,int b, float ratio);

#endif /*EVAN*/
