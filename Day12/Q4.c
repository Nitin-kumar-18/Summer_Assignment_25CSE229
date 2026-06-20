#include <stdio.h>

void perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    perfect(num);

    return 0;
}