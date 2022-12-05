#include <stdio.h>

int An(int n)
{
    int An;
    int An_2 = 0;
    int An_1 = 0;
    if(n == 1) return An_2;
    if(n == 2) return An_1;
    for(int i = 3; i <= n; i++)
    {
        if(An_1 > 2 * An_2)
        {
            An = (An_2 + An_1 - 1) * (n + 1);
            An_2 = An_1;
            An_1 = An;
        }
        else
        {
            An = (An_2 - An_1 + 1) * ((An_2 + 1) * (An_2 + 1));
            An_2 = An_1;
            An_1 = An;
        }
    }
    return An;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("An = %d", An(n));
}

