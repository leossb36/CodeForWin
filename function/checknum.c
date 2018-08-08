#include <stdio.h>

int check_num(int num);


int main()
{
    int value, check;

    printf("Enter with a numeric value: ");

    scanf("%d", &value);

    check = check_num(value);

    printf("%d is %s\n", value, (check_num(value)) ? "even":"odd");

    return 0;
}

int check_num(int num)
{
    return !(num & 1);
}