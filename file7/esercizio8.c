#include <stdio.h>

int controlla_divisibilita(int array[], int i, int lenght)
{
    for(int j = 0; j < lenght; j++)
        if(j != i && array[i]%array[j] == 0) return 0;
    return 1;
}

void funzione(int array1[], int array2[], int lenght)
{
    for(int i = 0; i < lenght; i++)
    {
        if(controlla_divisibilita(array1, i, lenght) == 1)
        {
            array2[i] = array1[i];
        }
    }
}

int main()
{
    int array1[5] = {7, 3, 6, 13, 23};
    int array2[5] = {0,0,0,0,0};
    int lenght = 5;
    funzione(array1, array2, lenght);
    for(int i = 0; i < lenght; i++)
    {
        printf("a[%d] = [%d]\n", i, array2[i]);
    }
}