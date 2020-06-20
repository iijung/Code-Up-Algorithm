#include <stdio.h>

char knum[10][3] = {"��", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��"};

void f(int n)
{
    int digit = 1000;
    while (digit > 0)
    {
        int t = n / digit % 10;
        if (t)
        {
            printf("%s", knum[t]);
            switch (digit)
            {
            case 10:
                printf("��");
                break;
            case 100:
                printf("��");
                break;
            case 1000:
                printf("õ");
                break;
            }
        }
        digit /= 10;
    }
}

void NUMBERSTRING(int n)
{
    if (!n)
    {
        printf("%s", knum[0]);
    }
    else
    {
        int digit = 100000000;
        while (digit > 0)
        {
            int t = n / digit % 10000;
            if (t)
            {
                f(t);
                switch (digit)
                {
                case 10000:
                    printf("��");
                    break;
                case 100000000:
                    printf("��");
                    break;
                }
            }
            digit /= 10000;
        }
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    NUMBERSTRING(n);
    return 0;
}