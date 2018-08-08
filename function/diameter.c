#include <stdio.h>
#define pi 3.1416


double calc_diameter(double x);
double calc_circumference(double x);
double calc_area(double x);


int main ()
{
    double value, area, circ, dir;

    printf("Enter with a value to effect the operations: ");

    scanf("%lf", &value);

    dir = calc_diameter(value);

    circ = calc_circumference(value);

    area = calc_area(value);


    printf("Diameter = %.lf units\nCircumference = %.2lf units\nArea = %.2lf sq. units\n", dir, circ, area);



    return 0;
}

double calc_diameter(double x)
{
    return (2 * x);
}

double calc_circumference(double x)
{
    return (2 * pi * x);
}

double calc_area(double x)
{
    return pi * calc_diameter(x);
}

