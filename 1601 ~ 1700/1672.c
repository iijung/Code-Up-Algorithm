#include <stdio.h>

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int count = n / k;
    if (count > 9999)
    {
        printf("��ȣ �ʰ� ����\n");
    }
    else
    {
        for (int i = 1; i <= n / k; i++)
        {
            printf("F-%04d\n", i);
        }
    }

    return 0;
}