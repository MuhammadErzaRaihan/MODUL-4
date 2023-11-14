#include <stdio.h>

int main()
{
    int E, Z;
    int Max;

    scanf("%d %d", &E, &Z);
    Max = (E-Z);    
    if (Max <0)
    {
        Max = Max*-1;
    for (int i = 0; i <= Max; i++)
    {
        int j = 1;
        printf("%d %d - ", E, Z);

        E = E+j;
        Z = Z-j;

    }
    }
    else{
    for (int i = 0; i <= Max; i++)
        {
            int j = 1;

            printf("%d %d - ", E, Z);

            E = E-j;
            Z = Z+j;
        }
    }
    return 0;
}