#include <stdio.h>

void funzione(int array[], int lenght, int k)
{
    if(k > 0)
    {
        for(int i = 0; i < k; i++)
        {

            for(int j = 0; j < lenght - 2; j++)
            {
                int  tmp = array[lenght - 1];
                array[j + 1] = array[j];
                array[0] = tmp;
            }
        }
    }
}

int main()
{
    int array[6] = {0,2,5,1,10,7};
    int lenght = 6;
    int k = 3;
    funzione(array, lenght, k);
    for(int i = 0; i < lenght; i++)
        printf("%d, ", array[i]);
}