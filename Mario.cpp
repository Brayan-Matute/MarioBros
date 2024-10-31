#include <Gl/glut.h>
#include "mario.h"
#include "variables.h"
#include "graphics.h"


void charma(int x_des, int y_des)
{

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (charmander[i][j] == 0)
            {
                //drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 1.0f, 1.0f, 1.0f); // yellow
            }
            else if (charmander[i][j] == 1) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 1.0f, 0.0f, 0.0f); // red
            }
            else if (charmander[i][j] == 2) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.52f, 0.43, 0); // green
            }
            else if (charmander[i][j] == 3) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.98f, 0.60, 0.21); // black
            }
            else if (charmander[i][j] == 4) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 1.0f, 0.5f, 0.0f); // naranja
            }
            else if (charmander[i][j] == 5) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.5f, 1.0f, 1.0f); // azul
            }
            else if (charmander[i][j] == 6) {
                drawPixel((j + x_des) / static_cast<float>(10), (rows - i - 1 + y_des) / static_cast<float>(10), 0.1f, 0.1f, 0.0f); // cafe
            }
        }
    }
}

