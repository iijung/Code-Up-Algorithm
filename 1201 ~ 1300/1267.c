#include <stdio.h>

int main()
{
    int n = 0, number = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        if (number % 5 == 0)
            sum += number;
    }
    printf("%d", sum);
    return 0;
}