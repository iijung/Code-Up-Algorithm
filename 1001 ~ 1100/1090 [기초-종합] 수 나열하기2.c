#include <stdio.h>

int main()
{
    int a = 0, r = 0, n = 0;
    long long result = 0;
    scanf("%d %d %d", &a, &r, &n);
    result = a;
    for (int i = 0; i < n - 1; i++)
    {
        result *= r;
    }
    printf("%lld", result);
    return 0;
}