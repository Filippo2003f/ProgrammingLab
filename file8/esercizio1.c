#include <stdio.h>
#include <stdlib.h>


int* EliminaDuplicati(int array[], int lenght)
{
    int k = 0;
    for(int i = 0; i < lenght; i++)
    {
        for(int j = i + 1; j < lenght; j++)
        {
            if(array[j] == array[i])
            {
                k += 1;
                for(int a = j; a < lenght; a++)
                    array[j] = array[j + 1];
                array[lenght - 1] = 0;   
            }  
        }
    }
    int* p = (int *)malloc(sizeof(int) * (lenght - k));
    for(int b = 0; b <= lenght - k; b++)
    {
        p[b] = array[b];
        printf("%d", p[b]);
    }
}

int main()
{
    int array[] = {1,2,3,2,5,3};
    int lenght = 6;
    EliminaDuplicati(array, lenght);
}