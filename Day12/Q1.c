#include <stdio.h>

void palindrome(int n)
{
    int rev = 0, rem, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    palindrome(num);

    return 0;
}