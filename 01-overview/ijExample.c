#include <stdio.h>

void copyij(int src[1010][1010],
            int dst[1010][1010])
{
    int i, j;
    for (i = 0; i < 1010; i++)
        for (j = 0; j < 1010; j++)
            dst[i][j] = src[i][j];
}

int main(int argc, char *argv[])
{
    int a[1010][1010];
    int b[1010][1010];
    copyij(a,b);
    printf("Hello World\n");
    return 0;
}