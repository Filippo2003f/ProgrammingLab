#include <stdio.h>

float sum(int n)
{
    if(n == 0) return 1;
    return 1 / ((2 * n + 1) * (2 * n + 1)) + sum(n -1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("la sommatoria e': %f", sum(n));
}