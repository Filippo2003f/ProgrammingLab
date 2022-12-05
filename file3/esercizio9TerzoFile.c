#include <stdio.h>

int pow(int k, int i)
{
    if(i == 1) return k;
    return k * pow(k, i-1);
}

float Sn(int k, int n)
{
    if(n == 1) return (k * k) /3;
    return (n * pow(k, n + 1))/ pow(3, n) + Sn(k, n - 1);
}

float Sn_ite(int k, int n)
{
    float Sn = (k * k) / 3;
    for(int i = 2; i <= n; i++)
    {
        Sn = Sn + (i * pow(k, i+1)) / pow(3, i);
    }
    return Sn;

}

int main()
{
    int k, n;
    scanf("%d", &n);
    scanf("%d", &k);
    printf("Sn = %f", Sn_ite(k, n));
}