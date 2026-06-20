#include <stdio.h>

void armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong(num);

    return 0;
}