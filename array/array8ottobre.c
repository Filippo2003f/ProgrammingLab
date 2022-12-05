#include <stdio.h>

int main()
{
    int A[5] = {0, 1, 2, -1, 4};
    for(int i = 0; i < 5; i++)
    {
        if(A[i]%2 == 0)
        {
            A[i] = 0;
        }
        else A[i] = 1;
    }
}