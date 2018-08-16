#include <stdio.h>

void print_armstrong(int start, int end);
int check_armstrong(int num);

int main ()
{
    int lower, upper;

    printf("Enter with the value of lower and upper limit\n");

    scanf("%d%d", &lower, &upper);

    print_armstrong(lower, upper);
    
    return 0;
}

int check_armstrong(int num)
{
    int var, lastDigit, sum;

    var = num;
    sum = 0;

    while (var != 0)
    {
        lastDigit = var % 10;
        sum += lastDigit * lastDigit * lastDigit;
        var /= 10;
    }

    if (num == sum)
    {
        return 1;
    }
    else
        return 0;
}

void print_armstrong(int start, int end)
{
    while (start <= end)
    {
        if(check_armstrong(start))
        {
            printf("%d\n", start);
        }
        start++;
    }
}