#include <stdio.h>
int main()
{
    int N, T;
    scanf("%d\n", &T);
    for (int i = 1; i <= T; i++)
    {
        
        scanf("%d\n", &N);
        long long int fact = 1;
        for (int j = 1; j <= N; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
