#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userinput;
    int count = 0;
    printf("Enter a non-negative integer: ");
    if(scanf("%d", &userinput) != 1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    else if(userinput < 0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    int n = userinput;
    while(n != 0)
    {
        n &= (n - 1);
        count++;
    }
    printf("Number of bits set in %d: %d", userinput, count);

    return 0;
}