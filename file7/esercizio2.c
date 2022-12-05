#include <stdio.h>

int f(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[j] == a[i]) return 0;
    return 1;
    

}

int main()
{
    int a[5] = {1,2,2,4,5};
    int n = 5;
    if(f(a,n) == 1) printf("I valori sono tutti diversi");
    else printf("Ci sono almeno due valori uguali");
}