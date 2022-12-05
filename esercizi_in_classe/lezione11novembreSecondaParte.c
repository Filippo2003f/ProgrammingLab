#include <stdio.h>

int f(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i+1]) return 0;
    }
    return 1;
}

int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    int n = 5;
    printf("%d", f(a,n));

}