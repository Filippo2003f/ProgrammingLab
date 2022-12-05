#include <stdio.h>

int funzione(int array[], int lenght, int k)
{
    for(int i = 0; i <= lenght - 2; i++)
    {
        if(array[i] + array[i+1] + array[i+2] == k) return 1;
    }
    return 0;
}

int main()
{
    int array[5] = {1,2,2,4,5};
    int lenght = 5;
    int k = 12;
    if(funzione(array, lenght, k) == 1)
        printf("ci sono tre elementi dell'array consecutivi la cui somma e' uguale a k");
    printf("non ci sono tre elementi dell'array consecutivi la cui somma e' uguale a k");
}