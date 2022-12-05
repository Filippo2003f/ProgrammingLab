#include <stdio.h>
int main()
{
    int Array[] = {2,1};
    int lenght = 2;

    //ordina con selection sorting

    for(int i = 0; i < lenght - 1; i ++)
    {
        int posizione_minimo = i;
        for(int j = i + 1; j < lenght; j++)
        {
            if(Array[j] < Array[posizione_minimo]) 
                posizione_minimo = j;
        }
        int temp = Array[i];
        Array[i] = Array[posizione_minimo];
        Array[posizione_minimo] = temp;
    }

    //stampa array sortato

    for(int i = 0; i < lenght; i ++)
    {
        printf("a[%d] = %d\n", i, Array[i]);
    }
}