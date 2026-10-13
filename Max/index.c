#include <stdio.h>
int main()
{
    long long int N, max = 0;
    long long int j;
    scanf("%lld", &N);
    if (1 <= N <= 1000)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%lld ", &j);
            if (0 <= j <= 1000000000)
            {
                if (max < j)
                {
                    max = j; 
                }
            }
        }
        printf("%lld", max);
    }

    return 0;
}