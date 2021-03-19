#include <stdio.h>

int main()
{
    int n, isPrime = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 1)
        printf("1 is not a prime number or a composite number");
    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 1)
        printf("\n%d is not a prime number", n);
    else
        printf("\n%d is a prime number", n);
}