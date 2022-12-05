#include <stdio.h>
#include <stdlib.h>

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

int fondi_array(int array1[], int array2[], int lenght1, int lenght2)
{
    int* p = malloc(sizeof(int) * (lenght1 + lenght2));
    for(int i = 0; i < lenght1; i++) 
        p[i] = array1[i];
    for(int j = lenght1; j < (lenght1 + lenght2); j++)
        p[j] = array2[];
    OrdinaArray(p, (lenght1 + lenght2));
    for(int a = 0; a < (lenght1 + lenght1); a++)
        printf("%d\n", p[a]);
}

int main()
{
    int array1[5] = {1,3,5,7,9};
    int array2[5] = {2,4,6,8,10};
    int lenght1 = 5;
    int lenght2 = 5;
    fondi_array(array1, array2, lenght1, lenght2);
}