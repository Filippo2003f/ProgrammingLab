#include <stdio.h>

double pow2(double n)
{
    return n*n;
}

float media(int a[], int n)
{
    double somma = 0;
    for(int i = 0; i < n; i++)
        somma = somma + a[i];
    return (somma / n); 
}

double varianza(int a[], int n)
{
    double m = media(a, n);
    double num = 0;

    for( int i = 0; i < n; i++)
        num += pow2(a[i] - m);
    return (num / n);
}

int main()
{
    int a[5] = {3, 3, 3, 3, 3};
    int n = 5;
    float v = varianza(a, n);
    printf("La varianza e': %f", v);
}