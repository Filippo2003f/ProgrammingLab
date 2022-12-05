#include <stdio.h>

int fattoriale_ricorsivo(int numero)
{
    if(numero == 0) return 1;
    if(numero == 1) return 1;
    return numero * fattoriale_ricorsivo(numero - 1);
}

