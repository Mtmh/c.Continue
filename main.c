#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 100; ++i)
    {
        if (i == 10 || i == 99 )
            continue; // En este caso el continue salta 10, 99 y sigue
        printf( "%d\n", i);
    }
    printf("\n");
    return 0;
}
