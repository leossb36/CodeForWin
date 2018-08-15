#include <stdio.h>

int check_prime(int numb);
void print_prime(int lower, int upper);


int main()
{
    int lowerLimt, upperLimit;

    printf("Enter with the value of lower limit and upper limit:\n");

    scanf("%d%d", &lowerLimt, &upperLimit);

    print_prime(lowerLimt, upperLimit);

    return 0;
}


void print_prime(int lower, int upper)
{
    printf("All prime number between %d to %d are:\n", lower, upper);
    
    while(lower <= upper)
    {
        if(check_prime(lower))
        {
            printf("%d\n", lower);
        }
        lower++;
    }
}

int check_prime(int numb)
{
  for (int i = 2; i <= numb/2; i++)
  {
      if (numb % i == 0)
      {
          return 0;
      }
  }
  return 1;
}