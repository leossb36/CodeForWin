#include <stdio.h>

double calc_cubic(double numb);

void print_cubic(double numb, double result);


int main()
{
    double value;

    printf("ENTER WITH A VALUE: ");
    
    scanf("%lf", &value);

    double calc = calc_cubic(value);
    
    print_cubic(value, calc);
    
    return 0;
}

double calc_cubic(double numb)
{
    double num = numb * numb * numb;
    
    return num;
}

void print_cubic(double numb, double result)
{
    printf("THE CUBIC OF %.lf IS %.lf\n", numb, result);
}
