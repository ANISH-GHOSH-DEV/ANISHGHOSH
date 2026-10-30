

#include <stdio.h>

int main()
{
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }

    if (n > 1 && count == 0)
        printf("%d is a Prime number", n);
    else
        printf("%d is not a Prime number", n);

    return 0;
}

