#include <stdio.h>

long long fact(int num);
void print_num(int lower, int upper);

int main()
{
    int num1, num2;

    printf("Enter with the values of lower and upper limits:\n");

    scanf("%d%d", &num1, &num2);

    printf("Strong numbers between %d and %d is...\n", num1, num2);
    print_num(num1, num2);

    return 0;
}

long long fact(int num)
{
    if (num == 0)
        return 1;
    else
        return (num * fact(num - 1));
}

void print_num(int lower, int upper)
{
    int num;
    long long sum;

    while (lower != upper)
    {
        num = lower;
        sum = 0;

        while (num != 0)
        {
            sum += fact(num % 10);
            
            num /= 10;
        }

        if (lower == sum)
        {
            printf("%d\n", lower);
        }
    
        lower++;
    
    }

}
