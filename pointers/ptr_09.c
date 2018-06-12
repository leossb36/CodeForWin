#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int main()
{
  int matrix[LIN][COL], *ptr;

  for(int i = 0; i < LIN; i++)
  {
    for(int j = 0; j < COL; j++){
      printf("Elements: %d : %d = ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  ptr = &matrix[0][0];

  return 0;
}

