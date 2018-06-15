#include <stdio.h>

unsigned long long calc_factorial(int n);

int main()
{
    int numb;
    unsigned long long fact; //return var

    printf("\nEnter with a value to calculate the factorial: ");

    scanf("%d", &numb);

    fact = calc_factorial(numb);

    printf("The factorial de %d = %llu\n", numb, fact);

    return 0;
}

unsigned long long calc_factorial(int n)
{
    // factorial is numb * numb - 1 * numb - 2 ...

    if (n == 0 || n == 1)
        return 1;
    else
        return n * calc_factorial(n - 1);
}