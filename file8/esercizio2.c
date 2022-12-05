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

int verifica(int array[], int lenght, int J)
{
    
}


int main()
{
    int array[5] = {6,7,3,7,8};
    int lenght = 5;
    OrdinaArray(array, lenght);


}