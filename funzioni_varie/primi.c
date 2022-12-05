#include <stdio.h>
int primo_ric(int n, int m)
{
    if (m==1) return 1;
    if (n%m == 0) return 0;
    return primo_ric(n, m-1);
}

int primo_ite(int n)
{
    int m = n -1;
    for(int i = 2; i < m; i++)
    {
        if(n%i == 1) return 1;
    }
    return 0;

}

int main()
{
    int a, b, ris;
    printf("Inserisci a: ");
    scanf("%d", &a);
    ris = primo_ite(a);
    if(ris == 1)
    {
        printf("\n primo");
    }
    else printf("\n non primo");

}