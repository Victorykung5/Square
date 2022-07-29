#include <stdio.h>
int main()
{
  int a;
  printf("Enter size of square =");
   scanf("%d", &a);
  {if (a >= 1)
  {
    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j < a; j++)
      {
        if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
          printf("#");
        else
          printf(" ");
      }
      printf("\n");
    }
  }
  else
    printf("ERROR!");}
  return 0;
}