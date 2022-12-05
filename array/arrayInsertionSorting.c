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

int main()
{
    int array[] = {5,4,3};
    int lenght = 3;
    OrdinaArray(array, lenght);
    for(int i = 0; i < lenght; i++)
    {
        printf("a[%d] = %d\n", i, array[i]);
    }
}