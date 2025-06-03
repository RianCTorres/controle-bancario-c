/**
 * Autor......: Rian da Cruz
 * Data.......: 31/10/2024
 * 
 * Objetivo...: criar um sistema bancario para registro de contas e transações
 * 
 * Subfunção..: gotoxy
 */
#include "../../include/funcoes.h"
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}