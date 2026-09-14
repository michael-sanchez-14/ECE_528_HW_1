#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int f0 = 0;
    int f1 = 1;
    int fn;
    printf("Enter N (2 or greater): ");
    if(scanf("%d", &n) != 1)
    {
        printf("INVALID INPUT. PLEASE ENTER A NON NEGATIVE INTEGER");
        return 0;
    }
    else if(n < 1)
    {
        printf("INVALID INPUT. PLEASE ENTER A NON NEGATIVE INTEGER");
        return 0;        
    }

    printf("%d %d ", f0, f1);
    for(int i = 1 ;i < n; i++)
    {
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
        printf("%d ", fn);
    }
    return 0;
}