#include <stdio.h>

float succ_ite(int n)
{
    if(n == 1) return 1/2;
    return (succ_ite(n-1) + 1) / 2;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("An= %f", succ_ite(n));

}