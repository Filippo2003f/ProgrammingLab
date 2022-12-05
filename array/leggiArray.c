#include <stdio.h>


void leggi_array(int v[], int dim)
{
    int i = 0;
    for(i < dim; i++)
        scanf("%d", &v[i]);
}

void legi_array(int* p, int dim)
{
    int i = 0;
    for(int i < dim; i++)
        scanf("%d", p + i);
}
