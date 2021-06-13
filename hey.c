#include <stdio.h>
int main(){
  for (int r= 1; r<= 3; r++) 
  {
    for (int c = 1; c <= 5-r; c++) { 
      printf(" ");
    }

    for (int c = 1; c <= 2*r - 1; c++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}

