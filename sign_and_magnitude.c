#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    if(scanf("%d", &num) != 1)
    {
        printf("INVALID INPUT");
        return 0;
    }

    if(num > 0)
    {
        printf("%d is a positive number \n", num);
    }
    else if(num < 0)
    {
        printf("%d is a negative number \n", num);
    }
    else if(num == 0)
    {
        printf("%d is neither positive or negative\n", num);
    }

    printf("Absolute Value: %d", abs(num));
    return 0;
}   