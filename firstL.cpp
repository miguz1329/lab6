//Esteban Rodriguez

#include "fonts.h"

void showName(const char* name)
{
    Rect r;
    r.left = 200;
    r.bot = 200;

    ggprint8b(&r, 16, 0x00ffff00, name);
}
