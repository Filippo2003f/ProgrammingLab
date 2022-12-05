#include <stdio.h>

int f(int a[], int b[], int n)
{
    int p = 0;
    for(int i = 0; i < n - 1; i++)
        p += a[i] * b[i];
    return p;

}

int main()
{
    int a[6] = {1,1,1,1,1,1};
    int b[6] = {1,1,1,1,1,1};
    int n = 6;
    printf("il prodotto scalare dei due array e': %d", f(a, b, n));

}