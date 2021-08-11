#include <stdio.h>
int main()
{
    int num;
    printf("\n enter the integer number");
    scanf("%d", &num);
    if (num > 0)
        printf("integer is positive number");
    else if (num < 0)
        printf("integer is negative number");
    else
        printf("0 is neither positive nor negative number");
    return 0;
}
