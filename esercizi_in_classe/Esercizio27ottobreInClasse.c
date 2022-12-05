#include <stdio.h>

int Sn_ric(int n)
{
    if(n == 0) return 1;
    return 2 * Sn_ric(n -1);
}

int Sn_ite(int n)
{
    int Sn = 1;
    for(int i = 0; i < n; i++)
        Sn = Sn * 2;
    return Sn;
    
}

int X(int a, int b)
{
    

}

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("produttoria = %d", X(a, b) - b);
}