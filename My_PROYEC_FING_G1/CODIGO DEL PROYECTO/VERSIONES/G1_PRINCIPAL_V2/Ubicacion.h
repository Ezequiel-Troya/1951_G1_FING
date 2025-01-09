// LIBRERIAS
#include <windows.h>
/*****************************************************
* FUNCION PARA EL POSICIONEMIENTO EN X, Y COORDENADA *
******************************************************/
void posicion(int x, int y) {
    HANDLE miManejador = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(miManejador, dwPos);
}
