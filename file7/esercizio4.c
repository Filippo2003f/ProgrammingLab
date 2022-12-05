#include <stdio.h>

int sommaoriaElementiArray(int array[], int lenght)
{
    int s = 0;
    for(int i = 0; i < lenght; i ++)
        s += array[i];
    return s;
}

int funzione(int array1[], int array2[], int lenght1, int lenght2)
{
    for(int i = 0; i < lenght1; i++)
    {
        if(array1[i] == sommaoriaElementiArray(array2, lenght2)) return 1;
    }
    return 0;
}

int main()
{
    int array1[5] = {1,2,3,4,5};
    int lenght1 = 5;
    int array2[2] = {1,7};
    int lenght2 = 2;
    printf("%d\n", sommaoriaElementiArray(array2, lenght2));
    if(funzione(array1, array2, lenght1, lenght2) == 1) printf("c'e' almeno un elemento del primo array uguale alla sommatoria degli elementi del secondo array");
    else printf("non c'e' nessun elemento del primo array uguale alla sommatoria degli elementi del secondo array");
}