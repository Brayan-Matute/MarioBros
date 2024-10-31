#include <Gl/glut.h>
#include "piso.h"
#include "variables.h"
#include "graphics.h"


void piso(int x_des, int y_des)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (pisoPixel[i][j] == 0)
            {
                //drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 1.0f, 1.0f, 1.0f); // yellow
            }
            else if (pisoPixel[i][j] == 1) {
                drawTiesoPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.83f, 0.37f, 0.18f); // red
            }
            else if (pisoPixel[i][j] == 2) {
                drawTiesoPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.97f, 0.78f, 0.76f); // green
            }
            else if (pisoPixel[i][j] == 3) {
                drawTiesoPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0, 0, 0); // black
            }

        }
    }
}

void piso() {

    piso(24, 16);

    for (int i = -10; i < 18; i++) {

        piso(i * 16, -19);
    }


}