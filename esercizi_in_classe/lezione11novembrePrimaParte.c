#include <stdio.h>

int F1(int a[], int n)
{
    int i = 0;
    while(i<n && a[i]<0) i++;
    return i == n;
}

int F2(int a[], int n)
{
    return !F1(a,n);
}