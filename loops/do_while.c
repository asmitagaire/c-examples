#include <stdio.h>
int main()
{
  int a = 0;
  do
  {
    if (a % 2 != 0)
    {
      printf("%d\n", a);
    }
    a++;
  } while (a < 30);

  return 0;
}
