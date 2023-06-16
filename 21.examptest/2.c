#include <stdio.h>
int main()
{
    int i = 1;
    int n = 3;
    int k = 1;
    int sum = 0;
    for(i = 1; i <= n; i++)
    {
        k = 1;
        for(int j = 1; j <= i; j++)
        {
            k *= j;
        }
        sum += k;
    }
    printf("%d",sum);
    return 0;
}