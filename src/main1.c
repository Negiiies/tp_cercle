#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
#include "Evan.h"


void stu_set_circle(t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius);

void stu_set_spiral(t_bunny_pixelarray * pxa,
                    int x,
                    int y,
                    int radius,
                    int loops);
int main(void)
{
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    int x;
    int y;
    int radius;
    
    win = bunny_start(1000, 1000, false, "fl: Open a window tutorial");
    px = bunny_new_pixelarray(1000, 1000);
    origin.x = 0;
    origin.y = 0;
    x = 500;
    y = 500;
    radius = 200;
    clear_pixelarray(px, BLACK);
    stu_set_circle(px, x, y, radius);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep(1e7);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
