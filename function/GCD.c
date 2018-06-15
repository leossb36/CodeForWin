#include <stdio.h>

int GCD(int num1, int num2);


int main()
{
    int num1, num2, HCD;

    printf("Enter with the values of numbers: ");

    scanf("%d %d", &num1, &num2);

    HCD = GCD(num1, num2);

    printf("Greatest Common Divisor between %d and %d = %d\n", num1, num2, HCD);

    return 0;

}

int GCD(int num1, int num2)
{
    int divi;

    if (num2 == 0)
        return num1;

    else
        return GCD(num2, num1 % num2);
}