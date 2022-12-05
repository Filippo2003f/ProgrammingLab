#include <stdio.h>

int f(int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n - 1; i++)
        if(a[i]%2 == 0)
        {
            s += a[i];
        }   
    return s;
}

int main()
{
    int a[6] = {1,1,1,1,1,1};
    int n = 6;
    printf("La sommatoria degli elementi pari dell'array e': %d", f(a,n));

}