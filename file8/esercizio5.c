#include <stdio.h>

void funzione(int array[], int lenght)
{
    for(int i = 0; i < lenght; i++)
    {
        if(i%2 == 0 && array[i] <= array[i + 1])
        {
            int tmp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp;
        }
        if(i%2 == 1 && array[i] >= array[i + 1])
        {
            int tmp2 = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp2;
        }
    }
}

int main()
{
    int array[7] = {4,10,8,7,-2,99,0};
    int lenght = 7;
    funzione(array, lenght);
    for(int i = 0; i < lenght; i++)
    {
        printf("%d, ", array[i]);
    }
}