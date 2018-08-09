#include <stdio.h>
#include <math.h>

int check_prime(int num);
int armstrong(int num);
int perfect(int num);


int main()
{
    int value, prime, arm, perfct;

    printf("Enter with a value: ");

    scanf("%d", &value);

    prime = check_prime(value);

    arm = armstrong(value);

    perfct = perfect(value);

    return 0;
}

int check_prime(int num)
{
    int value;

    value = num;

    if (value % 2 == 0){
        printf("\n%d is not prime number\n", value);
        return value;
    }
    else{
        printf("\n%d is prime number\n", value);
        return value;
    }
    return value;
}

int armstrong(int num)
{
    int count = 0;
    int value, digits, lastDigit;

    value = num;

    digits = (int) log10(value) + 1;

    while(num > 0)
    {
        lastDigit = num % 10;
        count = count + round(pow(lastDigit, digits));

        num /= 10;
    }
    if (value == count)
    {
        printf("\n%d is armstrong number\n", value);
    }
    else
    {
        printf("\n%d is not armstrong number\n", value);
    }
    return (value == count);
}

int perfect(int num)
{
    int value;
    value = num;
    if (value % 2 == 0)
    {
        printf("\n%d is perfect numb\n", value);
        return 1;
    }
    else
    {
        printf("\n%d is not a perfect numb\n", value);
        return 0;
    }
    return value;
}
