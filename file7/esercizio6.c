#include <stdio.h>

void OrdinaArray(int array[], int lenght)
{
    for(int i = 1; i < lenght; i ++)
    {
        int temp = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}

int funzione(int array[], int lenght, int k)
{
    OrdinaArray(array, lenght);
    return array[k];

}

void main()
{
    int array[5] = {1,10,4,99,5};
    int lenght = 5;
    int k = 3;
    printf("%d", funzione(array, lenght, k - 1));
}