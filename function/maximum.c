#include <stdio.h>

void find_max(int num1, int num2);


int main()
{
    int num1, num2;

    printf("Enter with the values: ");
    scanf("%d%d", &num1, &num2);

    find_max(num1, num2);


    return 0;
}

void find_max(int num1, int num2)
{
    printf("MAX: %d\n", (num1 > num2) ? num1:num2);

}