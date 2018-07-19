#include <stdio.h>
#include <math.h>


float calc_discriminant(float a, float b, float c);
float calc_root_positive(float root);
float calc_root_negative(float root);


int main ()
{
  float delta;
  float root1, root2;

  float num1, num2, num3;

  printf("Enter with the values of equation:\n");
  
  printf("\nA: ");
  scanf("%f", &num1);

  printf("\nB: ");
  scanf("%f", &num2);

  printf("\nC: ");
  scanf("%f", &num3);

  delta = calc_discriminant(num1, num2, num3);

  switch (delta > 0)
  {
    case 1:

      root1 = calc_root_positive(delta);
      root2 = calc_root_negative(delta);

      printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
      break;

  }

  return 0;
}

float calc_discriminant(float a, float b, float c)
{
  float result;

  result = pow(b, 2) - (4*a*c);

  return result;
}

float calc_root_positive(float delta)
{
  float a, b, root;


  root = (-b +sqrt(delta)/(2 * a));
  return root;
}

float calc_root_negative(float delta)
{
  float a, b, root;

  root = (-b - sqrt(delta)/(2 * a));
  return root;
}