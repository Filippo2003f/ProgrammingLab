void scambia(int* p, int dim, int i, int j)
{
    if(i<dim && j<dim && i>0 && j>0)
    {
        int tmp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = tmp;
    }
}