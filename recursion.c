

#include <stdion.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}