#include <stdio.h>

int numeri_triangolari(int numero)
{
    if(numero == 1) return 1;
    return numero + numeri_triangolari(numero - 1);
} 

void funzione(int array[], int lenght)
{
    for(int i = 0; i < lenght; i++)
    {
        array[i] = numeri_triangolari(i + 1);
        printf("%d\n", array[i]);
    }
}

int main()
{
    int array[5] = {1,2,3,4,5};
    int lenght = 5;
    funzione(array, lenght);

}