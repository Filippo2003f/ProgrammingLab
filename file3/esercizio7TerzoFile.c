#include <stdio.h>

float succ_ric(int n, float p)
{
    if(n == 1) return p;
    return 0.5 * (succ_ric(n-1, p) + (p / succ_ric(n-1, p) ));

}

int main()
{
    int n;
    float p; 
    scanf("%d", &n);
    scanf("%f", &p);
    printf("An = %f", succ_ric(n, p));
}