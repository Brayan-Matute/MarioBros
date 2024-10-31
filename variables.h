#ifndef VARIABLES_H
#define VARIABLES_H
#include <GL/glut.h>
#include <iostream>

extern int last_pos_x;
extern int last_pos_y;

extern GLfloat angle;
extern GLfloat zoom;
extern GLfloat zoom2;
extern GLfloat camzoom;
extern GLfloat cx1;
extern GLfloat cy1;

extern float K;

const int rows = 19;
const int cols = 21;
extern int charmander[rows][cols];
extern int pisoPixel[rows][cols];



#endif // VARIABLES_H
