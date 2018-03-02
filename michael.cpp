// Michael Guzman 
#include "fonts.h"
#include <GL/glx.h> 
void showName(const char * name)
{

    Rect r;
    r.bot = 100;
    r.left = 100;
    r.center = 0;
    ggprint8b(&r, 16, 0x00ff0000, "Michael Guzman");

}

void drawBox(int x, int y)
{
    static float angle = 0.0;

     glColor3ub(255, 100, 10);
     glPushMatrix();
     glTranslatef(x, y, 0);
     glRotatef(angle, 0.0f, 0.0f, 1.0f);
     glTranslatef(-50, -50, 0);
     angle = angle + 2.5;
     glBegin(GL_QUADS);
	glVertex2i( 0, 0);
	glVertex2i(  0, 100);
	glVertex2i(  100, 100);
	glVertex2i(  100, 0);
	//glVertex2i(  0.0f, 20.0f);
	//glVertex2i( 12.0f, -10.0f);
     glEnd();								    
     Rect r;
    r.bot = 50;
    r.left = 50;
    r.center = 1;
    ggprint8b(&r, 16, 0x00fffff, "Michael Guzman");
     glPopMatrix();
}

