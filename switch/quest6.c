#include <stdio.h>

int main ()
{
  int num;

  printf("enter with a value to check positive negative or zero: ");

  scanf("%d", &num);

  switch(num > 0)
  {
    case 1:

      printf("the numb is positive\n");
      break;

    case 0:
      switch (num < 0)
      {
        case 1:
          printf("the numb is negative\n");
          break;

        case 0:
          printf("the numb is equal zero\n");
          break;
      }
    break;
  } 
  return 0;
}