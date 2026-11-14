#include <stdio.h>
void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    recursion(n / 10);
    int last_digit = n % 10;
    printf("%d ", last_digit);

    
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n==0)
        {
            printf("0");
            
        }
        
        recursion(n);
        printf("\n");
    }

    return 0;
}