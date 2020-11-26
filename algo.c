#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) //brain.exe stopped working
    {
        for (j = 0; j < 2 * i; j++)
            printf("  ");
        for (j = 1; j < i; j++)
            printf(" %d", j);
        if (j = 1)
            break;
        for (j = i; j >= 1; j--)
            printf(" %d", j);
        printf("\n");
    }
}
//chalo valo
