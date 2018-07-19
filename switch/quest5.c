#include <stdio.h>

int main ()
{
  int num;

  printf("Enter with a value to check if is odd or even: ");
  scanf("%d", &num);

  switch (num % 2 == 0)
  {
    case 0:
      printf("the numb is odd\n");
      break;

    case 1:
      printf("the numb is even\n");
      break;

  }

  return 0;
}