#include <stdio.h>

int LCM(int num1, int num2);

int main()
{
    int num1, num2, lcm;

    printf("Input with values: ");

    scanf("%d %d", &num1 , &num2);

    if(num1 > num2)
        lcm = LCM(num2, num1);
    else
        lcm = LCM(num1, num2);

    printf("lcm between %d and %d = %d\n", num1, num2, lcm);

    return 0;
}

int LCM(int num1, int num2)
{
    static int mult = 0;

    mult += num2;

    if ((mult % num1 == 0) && (mult % num2 == 0))
        return mult;
    
    else
        return LCM(num1, num2);

}