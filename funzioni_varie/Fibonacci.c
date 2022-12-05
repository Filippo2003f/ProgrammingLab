#include <stdio.h>

int fibo_ric(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 1;
    return fibo_ric(n-1) + fibo_ric(n-2);
}

int fibo_ite(int n)
{
    int An;
    int An_1 = 1;
    int An_2 = 1;
    if(n == 0) return 1;
    if(n == 1) return 1;
    for(int i = 2; i <= n; i++)
    {
        An = An_1 + An_2;
        An_2 = An_1;
        An_1 = An;
    }
    return An;
}

int main()
{
    int n;
    printf("Inserisci n: ");
    scanf("%d", &n);
    printf("An = %d", fibo_ite(n));
}