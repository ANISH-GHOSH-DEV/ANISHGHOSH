
#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (n > 1 && count == 0)
        printf("%d is a Prime number", n);
    else
        printf("%d is not a Prime number", n);

    return 0;
}
