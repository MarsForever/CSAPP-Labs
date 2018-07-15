#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a[2];
    double d;
} struct_t;

double fun(int i)
{
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824; /* Possibly out of bounds */
    return s.d;
}

int main(int argc, char *argv[])
{
    int i;
    for (i = 1; i < argc; i++)
    {
        int x = atoi(argv[i]);
        double sx = fun(x);
        printf("fun(%d) = %f\n", x, sx);
    }
    return 0;
}