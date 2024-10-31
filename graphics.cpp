#include <Gl/glut.h>
#include "graphics.h"
#include "variables.h"

void matriz_Base()
{
    glColor3f(0.0, 0.0, 1.0);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex3f(0, -5, 0.0);
    glVertex3f(0, 5, 0.0);
    glVertex3f(-5, 0, 0.0);
    glVertex3f(100, 0, 0.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(10, 5, 0.0);
    glVertex3f(10, -5, 0.0);
    glEnd();

}

// FUNCIONES


void drawPixel(float x, float y, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    x = x + cx1;
    glVertex3f(x, y, 0.0f);
    glVertex3f(x + 0.1, y, 0.0f);
    glVertex3f(x + 0.1, y + 0.1, 0.0f);
    glVertex3f(x, y + 0.1, 0.0f);
    glEnd();
}

void drawTiesoPixel(float x, float y, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    x = x + K;
    glVertex3f(x, y, 0.0f);
    glVertex3f(x + 0.1, y, 0.0f);
    glVertex3f(x + 0.1, y + 0.1, 0.0f);
    glVertex3f(x, y + 0.1, 0.0f);
    glEnd();
}

void cubo1()
{
    //glRotatef(angle, 1.0f, 0.0f, 0.0f); // Rotaci n del cubo sobre los ejes x e y
    glBegin(GL_QUADS);
    // Cara frontal
    glColor3f(1.0f, 0.0f, 0.0f); // Rojo
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    // Cara posterior
    glColor3f(0.0f, 1.0f, 0.0f); // Verde
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    // Otras caras
    glColor3f(0.0f, 0.0f, 1.0f); // Azul
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);

    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);

    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);

    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glEnd();
    //glPopMatrix();

}

void motionCallback(int x, int y) {
    // Imprimir las coordenadas del mouse
    printf("Mouse moved to (%d, %d)\n", x, y);
    if (x > last_pos_x) {
        std::cout << "Mouse movi ndose hacia la derecha" << std::endl;
        cx1 += 0.1f;
    }
    else if (x < last_pos_x) {
        std::cout << "Mouse movi ndose hacia la izquierda" << std::endl;
        cx1 += -0.1f;
    }
    last_pos_x = x;
    if (y > last_pos_y) {
        std::cout << "Mouse movi ndose hacia la abajo" << std::endl;
        cy1 += -0.1f;
    }
    else if (y < last_pos_y) {
        std::cout << "Mouse movi ndose hacia la arriba" << std::endl;
        cy1 += 0.1f;
    }
    last_pos_y = y;
}