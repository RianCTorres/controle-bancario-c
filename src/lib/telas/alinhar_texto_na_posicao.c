/**
 * Autor......: Rian da Cruz
 * Data.......: 16/11/2024
 * 
 * Objetivo...: criar um sistema bancario para registro de contas e transações
 * 
 * Subfunção..: alinha o texto desejano na posição indicada
 */
#include "../../include/funcoes.h"
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>

void AlinharTextoNaPosicao(int x, int y, char texto[]) {
    gotoxy(x, y);
    printf("%s", texto);
}