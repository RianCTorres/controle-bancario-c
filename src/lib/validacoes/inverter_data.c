/**
 * Autor......: Rian da Cruz Torres da Silva
 * Data.......: 31/10/2024
 * 
 * Objetivo...: criar um sistema bancario para registro de contas e transações
 * 
 * Subfunção..: Inverter uma data para tornar possível a comparação
 */

#include "../../include/funcoes.h"
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int InverterData(char data[]) {
    char dia[3], mes[3], ano[5];
    char dataInvertida[9];

    sscanf(data, "%2s/%2s/%4s", dia, mes, ano); // Separa os valores em 3 variáveis diferentes

    sprintf(dataInvertida, "%s%s%s", ano, mes, dia); // Concatena os valores

    return atoi(dataInvertida); // Retorna os valores após converter para inteiro
}