#include <stdio.h>

int primo(int n, int m)
{
    if(m == 1) return 1;
    if(n%m == 0) return 0;
    return primo(n, m-1);


}

int MyFunction(int x, int y)
{
    int c = 0;
    if(x == y) return c;
    else
    {
        for(int i = x + 1; i < y; i++)
        { 
            int m = i-1;
            if(primo(i, m) == 1) c = c + 1;
        }
        return c;
    }
}

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Tra x e y ci sono %d numeri primi ", MyFunction(x, y));

}